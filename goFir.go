package goFir

/*
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

	typedef struct regUpdate {
		int internal;
		int offset;
	} regUpdate_t;

	regUpdate_t regUpdates[11];
	int regUpdatePos=0;
	bool disableEdges;
	bool disabledRegOutputlogic;
	uint64_t Pred_de_tuhh_hbubert_noiseCancel_simpleFir_rst_update=0;
	bool Pred_de_tuhh_hbubert_noiseCancel_simpleFir_rst;
	uint64_t de_tuhh_hbubert_noiseCancel_simpleFir_Width;
	uint64_t de_tuhh_hbubert_noiseCancel_simpleFir_clk_update=0;
	uint64_t de_tuhh_hbubert_noiseCancel_simpleFir_clk;
	uint64_t de_tuhh_hbubert_noiseCancel_simpleFir_clk_prev;
	uint64_t de_tuhh_hbubert_noiseCancel_simpleFir_rst;
	uint64_t de_tuhh_hbubert_noiseCancel_simpleFir_tap[4];
	uint64_t de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[4];
	uint64_t de_tuhh_hbubert_noiseCancel_simpleFir_x;
	uint64_t de_tuhh_hbubert_noiseCancel_simpleFir_y;
	uint64_t de_tuhh_hbubert_noiseCancel_simpleFir_y$reg;
	int epsCycle=0;
	int deltaCycle=0;
	void frame49c() {
		uint64_t t0=de_tuhh_hbubert_noiseCancel_simpleFir_rst;
		//loadInternal[internalIdx=15]
		uint64_t t1=0;//const0
		bool t2=t0 != t1;//not_eq
		Pred_de_tuhh_hbubert_noiseCancel_simpleFir_rst=t2;
		Pred_de_tuhh_hbubert_noiseCancel_simpleFir_rst_update=((uint64_t) deltaCycle << 16ll) | (epsCycle & 0xFFFF);
	}
	void frame48c() {
		de_tuhh_hbubert_noiseCancel_simpleFir_clk_update=((uint64_t) deltaCycle << 16l) | (epsCycle & 0xFFFF);//isRisingEdge[internalIdx=12]
		//negPredicate[internalIdx=11]
		uint64_t t2=de_tuhh_hbubert_noiseCancel_simpleFir_tap[0];
		//loadInternal[internalIdx=9]
		uint64_t t3=de_tuhh_hbubert_noiseCancel_simpleFir_tap[1];
		//loadInternal[internalIdx=3]
		uint64_t t4=(((int64_t)(t2 + t3)) << 56) >> 56;//plus[targetSizeWithType=17]
		uint64_t t5=de_tuhh_hbubert_noiseCancel_simpleFir_tap[2];
		//loadInternal[internalIdx=5]
		uint64_t t6=(((int64_t)(t4 + t5)) << 56) >> 56;//plus[targetSizeWithType=17]
		uint64_t t7=de_tuhh_hbubert_noiseCancel_simpleFir_tap[3];
		//loadInternal[internalIdx=7]
		uint64_t t8=(((int64_t)(t6 + t7)) << 56) >> 56;//plus[targetSizeWithType=17]
		int64_t c9=t8 << 56;
		uint64_t t9=c9 >> 56;
		//cast_int[targetSize=8,currentSize=8]
		uint64_t current=de_tuhh_hbubert_noiseCancel_simpleFir_y$reg;
		de_tuhh_hbubert_noiseCancel_simpleFir_y$reg=t9;
		static regUpdate_t reg;
		if (current!=t9){
			reg.internal=7;
			reg.offset=0;
			regUpdates[regUpdatePos++]=reg;
		}
	}
	void frame494() {
		de_tuhh_hbubert_noiseCancel_simpleFir_clk_update=((uint64_t) deltaCycle << 16l) | (epsCycle & 0xFFFF);//isRisingEdge[internalIdx=12]
		//negPredicate[internalIdx=11]
		uint64_t t2=de_tuhh_hbubert_noiseCancel_simpleFir_tap[0];
		//loadInternal[internalIdx=9]
		uint64_t current=de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[1];
		de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[1]=t2;
		static regUpdate_t reg;
		if (current!=t2){
			reg.internal=5;
			reg.offset=1;
			regUpdates[regUpdatePos++]=reg;
		}
	}
	void frame496() {
		de_tuhh_hbubert_noiseCancel_simpleFir_clk_update=((uint64_t) deltaCycle << 16l) | (epsCycle & 0xFFFF);//isRisingEdge[internalIdx=12]
		//negPredicate[internalIdx=11]
		uint64_t t2=de_tuhh_hbubert_noiseCancel_simpleFir_tap[1];
		//loadInternal[internalIdx=3]
		uint64_t current=de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[2];
		de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[2]=t2;
		static regUpdate_t reg;
		if (current!=t2){
			reg.internal=5;
			reg.offset=2;
			regUpdates[regUpdatePos++]=reg;
		}
	}
	void frame47c() {
		//posPredicate[internalIdx=11]
		de_tuhh_hbubert_noiseCancel_simpleFir_clk_update=((uint64_t) deltaCycle << 16l) | (epsCycle & 0xFFFF);//isRisingEdge[internalIdx=12]
		uint64_t t2=0;//const0
		uint64_t t3=t2 & 0xffll;//cast_uint[targetSize=8,currentSize=32]
		de_tuhh_hbubert_noiseCancel_simpleFir_y$reg=t3;
		{
			static regUpdate_t reg;
			reg.internal=7;
			reg.offset=-1;
			regUpdates[regUpdatePos++]=reg;
		}
		//writeInternal[internal=2]
		uint64_t t5=0;//const0
		//Write to #null
		(void)t5;
	}
	void frame498() {
		de_tuhh_hbubert_noiseCancel_simpleFir_clk_update=((uint64_t) deltaCycle << 16l) | (epsCycle & 0xFFFF);//isRisingEdge[internalIdx=12]
		//negPredicate[internalIdx=11]
		uint64_t t2=de_tuhh_hbubert_noiseCancel_simpleFir_tap[2];
		//loadInternal[internalIdx=5]
		uint64_t current=de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[3];
		de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[3]=t2;
		static regUpdate_t reg;
		if (current!=t2){
			reg.internal=5;
			reg.offset=3;
			regUpdates[regUpdatePos++]=reg;
		}
	}
	void frame47e() {
		//posPredicate[internalIdx=11]
		de_tuhh_hbubert_noiseCancel_simpleFir_clk_update=((uint64_t) deltaCycle << 16l) | (epsCycle & 0xFFFF);//isRisingEdge[internalIdx=12]
		uint64_t t2=0;//const0
		memset(de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg, t2, 4);
		{
			static regUpdate_t reg;
			reg.internal=5;
			reg.offset=-1;
			regUpdates[regUpdatePos++]=reg;
		}
		//writeInternal[internal=13]
		uint64_t t4=0;//const0
		int a0=(int)t4;//pushAddIndex
		uint64_t t5=0;//const0
		uint64_t t6=t5 & 0xffll;//cast_uint[targetSize=8,currentSize=32]
		de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[a0]=t6;
		{
			static regUpdate_t reg;
			reg.internal=5;
			reg.offset=a0;
			regUpdates[regUpdatePos++]=reg;
		}
		//writeInternal[internal=13]
		uint64_t t8=1;//const1
		int a1=(int)t8;//pushAddIndex
		uint64_t t9=0;//const0
		uint64_t t10=t9 & 0xffll;//cast_uint[targetSize=8,currentSize=32]
		de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[a1]=t10;
		{
			static regUpdate_t reg;
			reg.internal=5;
			reg.offset=a1;
			regUpdates[regUpdatePos++]=reg;
		}
		//writeInternal[internal=13]
		uint64_t t12=2;//const2
		int a2=(int)t12;//pushAddIndex
		uint64_t t13=0;//const0
		uint64_t t14=t13 & 0xffll;//cast_uint[targetSize=8,currentSize=32]
		de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[a2]=t14;
		{
			static regUpdate_t reg;
			reg.internal=5;
			reg.offset=a2;
			regUpdates[regUpdatePos++]=reg;
		}
		//writeInternal[internal=13]
		uint64_t t16=0x3ll;//loadConstant[constantIdx=0]
		int a3=(int)t16;//pushAddIndex
		uint64_t t17=0;//const0
		uint64_t t18=t17 & 0xffll;//cast_uint[targetSize=8,currentSize=32]
		de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[a3]=t18;
		{
			static regUpdate_t reg;
			reg.internal=5;
			reg.offset=a3;
			regUpdates[regUpdatePos++]=reg;
		}
		//writeInternal[internal=13]
		uint64_t t20=0;//const0
		//Write to #null
		(void)t20;
	}
	void frame49a() {
		de_tuhh_hbubert_noiseCancel_simpleFir_clk_update=((uint64_t) deltaCycle << 16l) | (epsCycle & 0xFFFF);//isRisingEdge[internalIdx=12]
		//negPredicate[internalIdx=11]
		uint64_t t2=de_tuhh_hbubert_noiseCancel_simpleFir_x;
		//loadInternal[internalIdx=14]
		uint64_t current=de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[0];
		de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[0]=t2;
		static regUpdate_t reg;
		if (current!=t2){
			reg.internal=5;
			reg.offset=0;
			regUpdates[regUpdatePos++]=reg;
		}
	}
	bool skipEdge(uint64_t local) {
		uint64_t dc = local >> 16l;
		// Register was updated in previous delta cylce, that is ok
		if (dc < deltaCycle)
			return false;
		// Register was updated in this delta cycle but it is the same eps,
		// that is ok as well
		if ((dc == deltaCycle) && ((local & 0xFFFF) == epsCycle))
			return false;
		// Don't update
		return true;
	}
	void updateRegs() {
		int i;
		for (i=0;i<regUpdatePos; i++) {
			regUpdate_t reg=regUpdates[i];
			switch (reg.internal) {
				case 5:
				if (reg.offset==-1)
					memcpy(de_tuhh_hbubert_noiseCancel_simpleFir_tap, de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg, 4);
				else
					de_tuhh_hbubert_noiseCancel_simpleFir_tap[reg.offset] = de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[reg.offset]; break;
				case 7:
				de_tuhh_hbubert_noiseCancel_simpleFir_y = de_tuhh_hbubert_noiseCancel_simpleFir_y$reg; break;
			}
		}
	}
	void run(){
		deltaCycle++;
		epsCycle=0;
		do {
			regUpdatePos=0;
		frame49c();
		bool de_tuhh_hbubert_noiseCancel_simpleFir_clk_isRising=true;
		bool de_tuhh_hbubert_noiseCancel_simpleFir_clk_risingIsHandled=false;
		if (!disableEdges){
			uint64_t t12=de_tuhh_hbubert_noiseCancel_simpleFir_clk;
			uint64_t t12_prev=de_tuhh_hbubert_noiseCancel_simpleFir_clk_prev;
			if ((t12_prev!=0) || (t12!=1)) {
				de_tuhh_hbubert_noiseCancel_simpleFir_clk_isRising=false;
			}
		}
		if (skipEdge(de_tuhh_hbubert_noiseCancel_simpleFir_clk_update)){
			de_tuhh_hbubert_noiseCancel_simpleFir_clk_risingIsHandled=true;
		}
		bool p11=Pred_de_tuhh_hbubert_noiseCancel_simpleFir_rst;
		bool p11_fresh=true;
		uint64_t up11=Pred_de_tuhh_hbubert_noiseCancel_simpleFir_rst_update;
		if ((up11>>16 != deltaCycle) || ((up11&0xFFFF) != epsCycle)){
			p11_fresh=false;
		}
		if (de_tuhh_hbubert_noiseCancel_simpleFir_clk_isRising&& !de_tuhh_hbubert_noiseCancel_simpleFir_clk_risingIsHandled && !p11 && p11_fresh)
			frame48c();
		if (de_tuhh_hbubert_noiseCancel_simpleFir_clk_isRising&& !de_tuhh_hbubert_noiseCancel_simpleFir_clk_risingIsHandled && !p11 && p11_fresh)
			frame494();
		if (de_tuhh_hbubert_noiseCancel_simpleFir_clk_isRising&& !de_tuhh_hbubert_noiseCancel_simpleFir_clk_risingIsHandled && !p11 && p11_fresh)
			frame496();
		if (de_tuhh_hbubert_noiseCancel_simpleFir_clk_isRising&& !de_tuhh_hbubert_noiseCancel_simpleFir_clk_risingIsHandled && p11 && p11_fresh)
			frame47c();
		if (de_tuhh_hbubert_noiseCancel_simpleFir_clk_isRising&& !de_tuhh_hbubert_noiseCancel_simpleFir_clk_risingIsHandled && !p11 && p11_fresh)
			frame498();
		if (de_tuhh_hbubert_noiseCancel_simpleFir_clk_isRising&& !de_tuhh_hbubert_noiseCancel_simpleFir_clk_risingIsHandled && p11 && p11_fresh)
			frame47e();
		if (de_tuhh_hbubert_noiseCancel_simpleFir_clk_isRising&& !de_tuhh_hbubert_noiseCancel_simpleFir_clk_risingIsHandled && !p11 && p11_fresh)
			frame49a();
		updateRegs();
		epsCycle++;
		} while (regUpdatePos!=0 && !disabledRegOutputlogic);
		de_tuhh_hbubert_noiseCancel_simpleFir_clk_prev=de_tuhh_hbubert_noiseCancel_simpleFir_clk;
	}
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
	// enable rst
	C.de_tuhh_hbubert_noiseCancel_simpleFir_rst = 1
	C.de_tuhh_hbubert_noiseCancel_simpleFir_clk = 0
	C.run()
	C.de_tuhh_hbubert_noiseCancel_simpleFir_clk = 1
	C.run()

	// disable rst
	C.de_tuhh_hbubert_noiseCancel_simpleFir_rst = 0
	C.de_tuhh_hbubert_noiseCancel_simpleFir_clk = 0
	C.run()
	C.de_tuhh_hbubert_noiseCancel_simpleFir_clk = 1
	C.run()
}

// read state from simulation code
func (sim SimpleFirSim) run(input int) State {
	var s State

	s.X = input
	// update input
	C.de_tuhh_hbubert_noiseCancel_simpleFir_x = C.uint64_t(s.X)

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
