package goFir

// #include "simpleFir.sim.h"
import "C"

import (
	"fmt"
	"time"
)

const (
	_ = iota
	idxRstPred
	idxWidth
	idxClk
	idxCoeffs
	idxRst
	idxTap
	idxX
	idxY
)

type SimpleFirSim struct {
	Input    []int
	Data     []State
	Duration time.Duration
}

type State struct {
	X   int
	Y   int
	Tap [4]int
}

// returns formated state string
func (s State) String() string {
	var str string

	str = fmt.Sprintf("X[%4d] Y[%4d]\n", s.X, s.Y)
	str += fmt.Sprintf("Taps %v\n", s.Tap)

	return str
}

func (s *State) update() {
	s.X = int(C.pshdl_sim_getOutput(idxX))
	s.Y = int(C.pshdl_sim_getOutput(idxY))
	// s.X = int(C.de_tuhh_hbubert_noiseCancel_simpleFir_x)
	// s.Y = int(C.de_tuhh_hbubert_noiseCancel_simpleFir_y)

	// cgo doesnt support variadic arguments :<
	// https://code.google.com/p/go/issues/detail?id=975
	// fmt.Println(C.pshdl_sim_getOutput(idxTap))
	for i, v := range C.de_tuhh_hbubert_noiseCancel_simpleFir_tap {
		s.Tap[i] = int(v)
	}
}

// reset simulation
func (sim SimpleFirSim) reset() {
	// enable rst
	C.pshdl_sim_setInput(idxRst, 1)
	C.pshdl_sim_setInput(idxClk, 0)

	C.pshdl_sim_run()
	C.pshdl_sim_setInput(idxClk, 1)
	C.pshdl_sim_run()

	// disable rst
	C.pshdl_sim_setInput(idxRst, 0)
	C.pshdl_sim_setInput(idxClk, 0)

	C.pshdl_sim_run()
	C.pshdl_sim_setInput(idxClk, 1)
	C.pshdl_sim_run()
}

// read state from simulation code
func (sim SimpleFirSim) run(input int) State {
	var s State

	s.X = input
	// update input
	C.pshdl_sim_setInput(idxX, C.long(s.X))

	// run one cycle
	C.pshdl_sim_setInput(idxClk, 0)

	C.pshdl_sim_run()
	C.pshdl_sim_setInput(idxClk, 1)
	C.pshdl_sim_run()

	// read output
	s.update()

	return s
}

func RunSimulation(input []int) *SimpleFirSim {
	runner := new(SimpleFirSim)

	var data []State

	runner.Input = input
	// TODO check if anoter sim is running!

	// starting simulation
	start := time.Now()

	// resetting simulator
	runner.reset()

	// iterate over input
	for _, x := range input {
		data = append(data, runner.run(x))
	}

	done := time.Now()

	runner.Data = data
	runner.Duration = done.Sub(start)

	runner.reset()

	return runner
}
