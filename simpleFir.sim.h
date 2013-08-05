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
	uint64_t de_tuhh_hbubert_noiseCancel_simpleFir_coeffs[4];
	uint64_t de_tuhh_hbubert_noiseCancel_simpleFir_rst;
	uint64_t de_tuhh_hbubert_noiseCancel_simpleFir_tap[4];
	uint64_t de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[4];
	uint64_t de_tuhh_hbubert_noiseCancel_simpleFir_x;
	uint64_t de_tuhh_hbubert_noiseCancel_simpleFir_y;
	uint64_t de_tuhh_hbubert_noiseCancel_simpleFir_y$reg;
	int epsCycle=0;
	int deltaCycle=0;
	void frame665() {
		uint64_t t0=1;//const1
		uint64_t t1=t0 & 0xffffffll;//cast_uint[targetSize=24,currentSize=32]
		de_tuhh_hbubert_noiseCancel_simpleFir_coeffs[0]=t1;
	}
	void frame667() {
		uint64_t t0=1;//const1
		uint64_t t1=t0 & 0xffffffll;//cast_uint[targetSize=24,currentSize=32]
		de_tuhh_hbubert_noiseCancel_simpleFir_coeffs[1]=t1;
	}
	void frame69a() {
		uint64_t t0=de_tuhh_hbubert_noiseCancel_simpleFir_rst;
		//loadInternal[internalIdx=19]
		uint64_t t1=0;//const0
		bool t2=t0 != t1;//not_eq
		Pred_de_tuhh_hbubert_noiseCancel_simpleFir_rst=t2;
		Pred_de_tuhh_hbubert_noiseCancel_simpleFir_rst_update=((uint64_t) deltaCycle << 16ll) | (epsCycle & 0xFFFF);
	}
	void frame669() {
		uint64_t t0=1;//const1
		uint64_t t1=t0 & 0xffffffll;//cast_uint[targetSize=24,currentSize=32]
		de_tuhh_hbubert_noiseCancel_simpleFir_coeffs[2]=t1;
	}
	void frame66b() {
		uint64_t t0=1;//const1
		uint64_t t1=t0 & 0xffffffll;//cast_uint[targetSize=24,currentSize=32]
		de_tuhh_hbubert_noiseCancel_simpleFir_coeffs[3]=t1;
	}
	void frame692() {
		de_tuhh_hbubert_noiseCancel_simpleFir_clk_update=((uint64_t) deltaCycle << 16l) | (epsCycle & 0xFFFF);//isRisingEdge[internalIdx=16]
		//negPredicate[internalIdx=15]
		uint64_t t2=de_tuhh_hbubert_noiseCancel_simpleFir_tap[0];
		//loadInternal[internalIdx=13]
		uint64_t current=de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[1];
		de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[1]=t2;
		static regUpdate_t reg;
		if (current!=t2){
			reg.internal=6;
			reg.offset=1;
			regUpdates[regUpdatePos++]=reg;
		}
	}
	void frame694() {
		de_tuhh_hbubert_noiseCancel_simpleFir_clk_update=((uint64_t) deltaCycle << 16l) | (epsCycle & 0xFFFF);//isRisingEdge[internalIdx=16]
		//negPredicate[internalIdx=15]
		uint64_t t2=de_tuhh_hbubert_noiseCancel_simpleFir_tap[1];
		//loadInternal[internalIdx=7]
		uint64_t current=de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[2];
		de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[2]=t2;
		static regUpdate_t reg;
		if (current!=t2){
			reg.internal=6;
			reg.offset=2;
			regUpdates[regUpdatePos++]=reg;
		}
	}
	void frame682() {
		de_tuhh_hbubert_noiseCancel_simpleFir_clk_update=((uint64_t) deltaCycle << 16l) | (epsCycle & 0xFFFF);//isRisingEdge[internalIdx=16]
		//negPredicate[internalIdx=15]
		uint64_t t2=de_tuhh_hbubert_noiseCancel_simpleFir_coeffs[0];
		//loadInternal[internalIdx=0]
		uint64_t t3=de_tuhh_hbubert_noiseCancel_simpleFir_tap[0];
		//loadInternal[internalIdx=13]
		uint64_t t4=(((int64_t)(t2 * t3)) << 16) >> 16;//mul[targetSizeWithType=97]
		uint64_t t5=de_tuhh_hbubert_noiseCancel_simpleFir_coeffs[1];
		//loadInternal[internalIdx=1]
		uint64_t t6=de_tuhh_hbubert_noiseCancel_simpleFir_tap[1];
		//loadInternal[internalIdx=7]
		uint64_t t7=(((int64_t)(t5 * t6)) << 16) >> 16;//mul[targetSizeWithType=97]
		uint64_t t8=(((int64_t)(t4 + t7)) << 16) >> 16;//plus[targetSizeWithType=97]
		uint64_t t9=de_tuhh_hbubert_noiseCancel_simpleFir_coeffs[2];
		//loadInternal[internalIdx=2]
		uint64_t t10=de_tuhh_hbubert_noiseCancel_simpleFir_tap[2];
		//loadInternal[internalIdx=9]
		uint64_t t11=(((int64_t)(t9 * t10)) << 16) >> 16;//mul[targetSizeWithType=97]
		uint64_t t12=(((int64_t)(t8 + t11)) << 16) >> 16;//plus[targetSizeWithType=97]
		uint64_t t13=de_tuhh_hbubert_noiseCancel_simpleFir_coeffs[3];
		//loadInternal[internalIdx=3]
		uint64_t t14=de_tuhh_hbubert_noiseCancel_simpleFir_tap[3];
		//loadInternal[internalIdx=11]
		uint64_t t15=(((int64_t)(t13 * t14)) << 16) >> 16;//mul[targetSizeWithType=97]
		uint64_t t16=(((int64_t)(t12 + t15)) << 16) >> 16;//plus[targetSizeWithType=97]
		int64_t c17=t16 << 40;
		uint64_t t17=c17 >> 40;
		//cast_int[targetSize=24,currentSize=48]
		uint64_t current=de_tuhh_hbubert_noiseCancel_simpleFir_y$reg;
		de_tuhh_hbubert_noiseCancel_simpleFir_y$reg=t17;
		static regUpdate_t reg;
		if (current!=t17){
			reg.internal=8;
			reg.offset=0;
			regUpdates[regUpdatePos++]=reg;
		}
	}
	void frame696() {
		de_tuhh_hbubert_noiseCancel_simpleFir_clk_update=((uint64_t) deltaCycle << 16l) | (epsCycle & 0xFFFF);//isRisingEdge[internalIdx=16]
		//negPredicate[internalIdx=15]
		uint64_t t2=de_tuhh_hbubert_noiseCancel_simpleFir_tap[2];
		//loadInternal[internalIdx=9]
		uint64_t current=de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[3];
		de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[3]=t2;
		static regUpdate_t reg;
		if (current!=t2){
			reg.internal=6;
			reg.offset=3;
			regUpdates[regUpdatePos++]=reg;
		}
	}
	void frame698() {
		de_tuhh_hbubert_noiseCancel_simpleFir_clk_update=((uint64_t) deltaCycle << 16l) | (epsCycle & 0xFFFF);//isRisingEdge[internalIdx=16]
		//negPredicate[internalIdx=15]
		uint64_t t2=de_tuhh_hbubert_noiseCancel_simpleFir_x;
		//loadInternal[internalIdx=18]
		uint64_t current=de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[0];
		de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[0]=t2;
		static regUpdate_t reg;
		if (current!=t2){
			reg.internal=6;
			reg.offset=0;
			regUpdates[regUpdatePos++]=reg;
		}
	}
	void frame671() {
		//posPredicate[internalIdx=15]
		de_tuhh_hbubert_noiseCancel_simpleFir_clk_update=((uint64_t) deltaCycle << 16l) | (epsCycle & 0xFFFF);//isRisingEdge[internalIdx=16]
		uint64_t t2=0;//const0
		uint64_t t3=t2 & 0xffffffll;//cast_uint[targetSize=24,currentSize=32]
		de_tuhh_hbubert_noiseCancel_simpleFir_y$reg=t3;
		{
			static regUpdate_t reg;
			reg.internal=8;
			reg.offset=-1;
			regUpdates[regUpdatePos++]=reg;
		}
		//writeInternal[internal=6]
		uint64_t t5=0;//const0
		//Write to #null 
		(void)t5;
	}
	void frame673() {
		//posPredicate[internalIdx=15]
		de_tuhh_hbubert_noiseCancel_simpleFir_clk_update=((uint64_t) deltaCycle << 16l) | (epsCycle & 0xFFFF);//isRisingEdge[internalIdx=16]
		uint64_t t2=0;//const0
		memset(de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg, t2, 4);
		{
			static regUpdate_t reg;
			reg.internal=6;
			reg.offset=-1;
			regUpdates[regUpdatePos++]=reg;
		}
		//writeInternal[internal=17]
		uint64_t t4=0;//const0
		int a0=(int)t4;//pushAddIndex
		uint64_t t5=0;//const0
		uint64_t t6=t5 & 0xffffffll;//cast_uint[targetSize=24,currentSize=32]
		de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[a0]=t6;
		{
			static regUpdate_t reg;
			reg.internal=6;
			reg.offset=a0;
			regUpdates[regUpdatePos++]=reg;
		}
		//writeInternal[internal=17]
		uint64_t t8=1;//const1
		int a1=(int)t8;//pushAddIndex
		uint64_t t9=0;//const0
		uint64_t t10=t9 & 0xffffffll;//cast_uint[targetSize=24,currentSize=32]
		de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[a1]=t10;
		{
			static regUpdate_t reg;
			reg.internal=6;
			reg.offset=a1;
			regUpdates[regUpdatePos++]=reg;
		}
		//writeInternal[internal=17]
		uint64_t t12=2;//const2
		int a2=(int)t12;//pushAddIndex
		uint64_t t13=0;//const0
		uint64_t t14=t13 & 0xffffffll;//cast_uint[targetSize=24,currentSize=32]
		de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[a2]=t14;
		{
			static regUpdate_t reg;
			reg.internal=6;
			reg.offset=a2;
			regUpdates[regUpdatePos++]=reg;
		}
		//writeInternal[internal=17]
		uint64_t t16=0x3ll;//loadConstant[constantIdx=0]
		int a3=(int)t16;//pushAddIndex
		uint64_t t17=0;//const0
		uint64_t t18=t17 & 0xffffffll;//cast_uint[targetSize=24,currentSize=32]
		de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[a3]=t18;
		{
			static regUpdate_t reg;
			reg.internal=6;
			reg.offset=a3;
			regUpdates[regUpdatePos++]=reg;
		}
		//writeInternal[internal=17]
		uint64_t t20=0;//const0
		//Write to #null 
		(void)t20;
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
				case 6: 
				if (reg.offset==-1)
					memcpy(de_tuhh_hbubert_noiseCancel_simpleFir_tap, de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg, 4);
				else
					de_tuhh_hbubert_noiseCancel_simpleFir_tap[reg.offset] = de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[reg.offset]; break;
				case 8: 
				de_tuhh_hbubert_noiseCancel_simpleFir_y = de_tuhh_hbubert_noiseCancel_simpleFir_y$reg; break;
			}
		}
	}
	void run(){
		deltaCycle++;
		epsCycle=0;
		do {
			regUpdatePos=0;
		frame665();
		frame667();
		frame69a();
		frame669();
		frame66b();
		bool de_tuhh_hbubert_noiseCancel_simpleFir_clk_isRising=true;
		bool de_tuhh_hbubert_noiseCancel_simpleFir_clk_risingIsHandled=false;
		if (!disableEdges){
			uint64_t t16=de_tuhh_hbubert_noiseCancel_simpleFir_clk;
			uint64_t t16_prev=de_tuhh_hbubert_noiseCancel_simpleFir_clk_prev;
			if ((t16_prev!=0) || (t16!=1)) {
				de_tuhh_hbubert_noiseCancel_simpleFir_clk_isRising=false;
			}
		}
		if (skipEdge(de_tuhh_hbubert_noiseCancel_simpleFir_clk_update)){
			de_tuhh_hbubert_noiseCancel_simpleFir_clk_risingIsHandled=true;
		}
		bool p15=Pred_de_tuhh_hbubert_noiseCancel_simpleFir_rst;
		bool p15_fresh=true;
		uint64_t up15=Pred_de_tuhh_hbubert_noiseCancel_simpleFir_rst_update;
		if ((up15>>16 != deltaCycle) || ((up15&0xFFFF) != epsCycle)){
			p15_fresh=false;
		}
		if (de_tuhh_hbubert_noiseCancel_simpleFir_clk_isRising&& !de_tuhh_hbubert_noiseCancel_simpleFir_clk_risingIsHandled && !p15 && p15_fresh)
			frame692();
		if (de_tuhh_hbubert_noiseCancel_simpleFir_clk_isRising&& !de_tuhh_hbubert_noiseCancel_simpleFir_clk_risingIsHandled && !p15 && p15_fresh)
			frame694();
		if (de_tuhh_hbubert_noiseCancel_simpleFir_clk_isRising&& !de_tuhh_hbubert_noiseCancel_simpleFir_clk_risingIsHandled && !p15 && p15_fresh)
			frame682();
		if (de_tuhh_hbubert_noiseCancel_simpleFir_clk_isRising&& !de_tuhh_hbubert_noiseCancel_simpleFir_clk_risingIsHandled && !p15 && p15_fresh)
			frame696();
		if (de_tuhh_hbubert_noiseCancel_simpleFir_clk_isRising&& !de_tuhh_hbubert_noiseCancel_simpleFir_clk_risingIsHandled && !p15 && p15_fresh)
			frame698();
		if (de_tuhh_hbubert_noiseCancel_simpleFir_clk_isRising&& !de_tuhh_hbubert_noiseCancel_simpleFir_clk_risingIsHandled && p15 && p15_fresh)
			frame671();
		if (de_tuhh_hbubert_noiseCancel_simpleFir_clk_isRising&& !de_tuhh_hbubert_noiseCancel_simpleFir_clk_risingIsHandled && p15 && p15_fresh)
			frame673();
		updateRegs();
		epsCycle++;
		} while (regUpdatePos!=0 && !disabledRegOutputlogic);
		de_tuhh_hbubert_noiseCancel_simpleFir_clk_prev=de_tuhh_hbubert_noiseCancel_simpleFir_clk;
	}

