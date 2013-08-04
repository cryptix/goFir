package goFir

// update simulation code
// curl -X POST -d module=de.tuhh.hbubert.noiseCancel.simpleFir http://api.pshdl.org/api/v0.1/compiler/46B03EAE542184E3/psex/c > SimpleFir.sim.c

// #include "SimpleFir.sim.c"
import "C"

import (
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
// func (sim SimpleFir) String() (s string) {

// 	s = fmt.Sprintf("X[%4d] Y[%4d]\n", sim.X, sim.Y)
// 	s += fmt.Sprintf("Taps %v\n", sim.Tap)

// 	return
// }

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
func (sim SimpleFirSim) run(data *state) {
	// update input
	C.de_tuhh_hbubert_noiseCancel_simpleFir_x = C.uint64_t(data.X)

	// run one cycle
	C.de_tuhh_hbubert_noiseCancel_simpleFir_clk = 0
	C.run()
	C.de_tuhh_hbubert_noiseCancel_simpleFir_clk = 1
	C.run()

	// read output
	data.update()

}

func (sim *SimpleFir) RunSimulation(input []int) *SimpleFir {
	runner := new(SimpleFir)

	data := make([]state, 0, len(input))

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
	for i, x := range input {
		data[i].X = x
		// eval one cycle
		sim.run(data[i])

		// fmt.Printf("\n\nState[%d] ΔT[%v]\n%s\n", i, post.Sub(pre), sim)
		// pre, post = post, time.Now()
	}

	done := time.Now()

	runner.Data = data
	runner.Duration = done.Sub(start)
	return runner
}
