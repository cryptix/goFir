package goFir

import (
	"testing"
)

var input = []int{0, 0, 0, 1, 2, 3, 0, 0, 0}
var output = []int{0, 0, 0, 0, 1, 3, 6, 6, 5}

func TestOutput(t *testing.T) {
	var sim *SimpleFirSim
	for run := 0; run < 3; run += 1 {
		sim = RunSimulation(input)

		for i, v := range sim.Data {
			if v.Y != output[i] {
				t.Error("Output not equal!")
				t.Errorf("run:%d real:%d expected:%d\n", run, v.Y, output[i])
			}
		}
	}
}

func TestInput(t *testing.T) {
	sim := RunSimulation(input)

	for i, v := range sim.Data {
		if v.X != input[i] {
			t.Errorf("Input not equal! real:%d expected:%d\n", v.Y, output[i])
		}
	}
}
