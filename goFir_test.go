package goFir

import (
	"testing"
)

var input = []int{0, 0, 0, 1, 2, 3, 0, 0, 0}
var output = []int{0, 0, 0, 0, 1, 3, 6, 6, 5}

func TestOutput(t *testing.T) {
	sim := RunSimulation(input)

	for i, v := range sim.Data {
		if v.Y != output[i] {
			t.Errorf("Output not equal! real:%d expected:%d\n", output[i], v.Y)
		}
	}
}

func TestInput(t *testing.T) {
	sim := RunSimulation(input)

	for i, v := range sim.Data {
		if v.X != input[i] {
			t.Errorf("Input not equal! real:%d expected:%d\n", output[i], v.Y)
		}
	}
}
