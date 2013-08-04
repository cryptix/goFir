package goFir

/*
 #include "simpleFir.sim.c"
*/
import "C"

import (
	"fmt"
	"time"
)

type SimpleFirSim struct {
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
	s.X = int(C.de_tuhh_hbubert_noiseCancel_simpleFir_x)
	s.Y = int(C.de_tuhh_hbubert_noiseCancel_simpleFir_y)
	for i, v := range C.de_tuhh_hbubert_noiseCancel_simpleFir_tap {
		s.Tap[i] = int(v)
	}
}

// reset simulation
func (sim SimpleFirSim) reset() {
	C.de_tuhh_hbubert_noiseCancel_simpleFir_clk = 0
	C.de_tuhh_hbubert_noiseCancel_simpleFir_rst = 0
	C.run()
	C.de_tuhh_hbubert_noiseCancel_simpleFir_clk = 1
	C.de_tuhh_hbubert_noiseCancel_simpleFir_rst = 1
	C.run()
}

// read state from simulation code
func (sim SimpleFirSim) run(input int) State {
	var s State

	s.X = input
	// update input
	C.de_tuhh_hbubert_noiseCancel_simpleFir_x = C.uint64_t(input)

	// run one cycle
	C.de_tuhh_hbubert_noiseCancel_simpleFir_clk = 0
	C.run()
	C.de_tuhh_hbubert_noiseCancel_simpleFir_clk = 1
	C.run()

	// read output
	s.update()

	return s
}

func RunSimulation(input []int) *SimpleFirSim {
	runner := new(SimpleFirSim)

	var data []State

	// TODO check if anoter sim is running!

	// starting simulation
	start := time.Now()

	// resetting simulator
	runner.reset()

	// start the engines..!
	C.de_tuhh_hbubert_noiseCancel_simpleFir_rst = 0

	// iterate over input
	// pre := afterReset
	// post := time.Now()
	for _, x := range input {
		// eval one cycle
		data = append(data, runner.run(x))

		// fmt.Printf("\n\nState[%d] ΔT[%v]\n%s\n", i, post.Sub(pre), sim)
		// pre, post = post, time.Now()
	}

	done := time.Now()

	runner.Data = data
	runner.Duration = done.Sub(start)
	return runner
}
