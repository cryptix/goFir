#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdarg.h>

	typedef struct regUpdate {
		int internal;
		int offset;
	} regUpdate_t;
	
	regUpdate_t regUpdates[11];
	int regUpdatePos=0;
	bool disableEdges;
	bool disabledRegOutputlogic;
	uint64_t _Pred_de_tuhh_hbubert_noiseCancel_simpleFir_rst_update=0;
	bool _Pred_de_tuhh_hbubert_noiseCancel_simpleFir_rst;
	uint32_t de_tuhh_hbubert_noiseCancel_simpleFir_Width;
	uint64_t de_tuhh_hbubert_noiseCancel_simpleFir_clk_update=0;
	uint32_t de_tuhh_hbubert_noiseCancel_simpleFir_clk;
	uint32_t de_tuhh_hbubert_noiseCancel_simpleFir_clk_prev;
	uint32_t de_tuhh_hbubert_noiseCancel_simpleFir_coeffs[4];
	uint32_t de_tuhh_hbubert_noiseCancel_simpleFir_rst;
	uint32_t de_tuhh_hbubert_noiseCancel_simpleFir_tap[4];
	uint32_t de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[4];
	uint32_t de_tuhh_hbubert_noiseCancel_simpleFir_x;
	uint32_t de_tuhh_hbubert_noiseCancel_simpleFir_y;
	uint32_t de_tuhh_hbubert_noiseCancel_simpleFir_y$reg;
	int epsCycle=0;
	int deltaCycle=0;
	
	void s000frame005D() {
		uint32_t t0=1;//const1
		uint32_t t1=t0 & 0xffffffll;//cast_uint[targetSize=24,currentSize=32]
		de_tuhh_hbubert_noiseCancel_simpleFir_coeffs[0]=t1;
	}
	void s001frame005F() {
		uint32_t t0=1;//const1
		uint32_t t1=t0 & 0xffffffll;//cast_uint[targetSize=24,currentSize=32]
		de_tuhh_hbubert_noiseCancel_simpleFir_coeffs[1]=t1;
	}
	void s001frame0092() {
		uint32_t t0=de_tuhh_hbubert_noiseCancel_simpleFir_rst;
		//loadInternal[internalIdx=19]
		uint32_t t1=0;//const0
		bool t2=t0 != t1;//not_eq
		_Pred_de_tuhh_hbubert_noiseCancel_simpleFir_rst=t2;
		_Pred_de_tuhh_hbubert_noiseCancel_simpleFir_rst_update=((uint64_t) deltaCycle << 16ll) | (epsCycle & 0xFFFF);
	}
	void s002frame0061() {
		uint32_t t0=1;//const1
		uint32_t t1=t0 & 0xffffffll;//cast_uint[targetSize=24,currentSize=32]
		de_tuhh_hbubert_noiseCancel_simpleFir_coeffs[2]=t1;
	}
	void s003frame0063() {
		uint32_t t0=1;//const1
		uint32_t t1=t0 & 0xffffffll;//cast_uint[targetSize=24,currentSize=32]
		de_tuhh_hbubert_noiseCancel_simpleFir_coeffs[3]=t1;
	}
	void s003frame006B() {
		//posPredicate[internalIdx=15]
		de_tuhh_hbubert_noiseCancel_simpleFir_clk_update=((uint64_t) deltaCycle << 16l) | (epsCycle & 0xFFFF);//isRisingEdge[internalIdx=16]
		uint32_t t2=0;//const0
		memset(de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg, t2, 4);
		{
			static regUpdate_t reg;
			reg.internal=6;
			reg.offset=-1;
			regUpdates[regUpdatePos++]=reg;
		}
		//writeInternal[internal=17]
		uint32_t t4=0;//const0
		int a0=(int)t4;//pushAddIndex
		uint32_t t5=0;//const0
		uint32_t t6=t5 & 0xffffffll;//cast_uint[targetSize=24,currentSize=32]
		de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[a0]=t6;
		{
			static regUpdate_t reg;
			reg.internal=6;
			reg.offset=a0;
			regUpdates[regUpdatePos++]=reg;
		}
		//writeInternal[internal=17]
		uint32_t t8=1;//const1
		int a1=(int)t8;//pushAddIndex
		uint32_t t9=0;//const0
		uint32_t t10=t9 & 0xffffffll;//cast_uint[targetSize=24,currentSize=32]
		de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[a1]=t10;
		{
			static regUpdate_t reg;
			reg.internal=6;
			reg.offset=a1;
			regUpdates[regUpdatePos++]=reg;
		}
		//writeInternal[internal=17]
		uint32_t t12=2;//const2
		int a2=(int)t12;//pushAddIndex
		uint32_t t13=0;//const0
		uint32_t t14=t13 & 0xffffffll;//cast_uint[targetSize=24,currentSize=32]
		de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[a2]=t14;
		{
			static regUpdate_t reg;
			reg.internal=6;
			reg.offset=a2;
			regUpdates[regUpdatePos++]=reg;
		}
		//writeInternal[internal=17]
		uint32_t t16=0x3;//loadConstant[constantIdx=0]
		int a3=(int)t16;//pushAddIndex
		uint32_t t17=0;//const0
		uint32_t t18=t17 & 0xffffffll;//cast_uint[targetSize=24,currentSize=32]
		de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[a3]=t18;
		{
			static regUpdate_t reg;
			reg.internal=6;
			reg.offset=a3;
			regUpdates[regUpdatePos++]=reg;
		}
		//writeInternal[internal=17]
		uint32_t t20=0;//const0
		//Write to #null 
		(void)t20;
	}
	void s003frame008A() {
		de_tuhh_hbubert_noiseCancel_simpleFir_clk_update=((uint64_t) deltaCycle << 16l) | (epsCycle & 0xFFFF);//isRisingEdge[internalIdx=16]
		//negPredicate[internalIdx=15]
		uint32_t t2=de_tuhh_hbubert_noiseCancel_simpleFir_tap[0];
		//loadInternal[internalIdx=13]
		uint32_t current=de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[1];
		de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[1]=t2;
		static regUpdate_t reg;
		if (current!=t2){
			reg.internal=6;
			reg.offset=1;
			regUpdates[regUpdatePos++]=reg;
		}
	}
	void s004frame008C() {
		de_tuhh_hbubert_noiseCancel_simpleFir_clk_update=((uint64_t) deltaCycle << 16l) | (epsCycle & 0xFFFF);//isRisingEdge[internalIdx=16]
		//negPredicate[internalIdx=15]
		uint32_t t2=de_tuhh_hbubert_noiseCancel_simpleFir_tap[1];
		//loadInternal[internalIdx=7]
		uint32_t current=de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[2];
		de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[2]=t2;
		static regUpdate_t reg;
		if (current!=t2){
			reg.internal=6;
			reg.offset=2;
			regUpdates[regUpdatePos++]=reg;
		}
	}
	void s005frame007A() {
		de_tuhh_hbubert_noiseCancel_simpleFir_clk_update=((uint64_t) deltaCycle << 16l) | (epsCycle & 0xFFFF);//isRisingEdge[internalIdx=16]
		//negPredicate[internalIdx=15]
		uint32_t t2=de_tuhh_hbubert_noiseCancel_simpleFir_coeffs[0];
		//loadInternal[internalIdx=0]
		uint32_t t3=de_tuhh_hbubert_noiseCancel_simpleFir_tap[0];
		//loadInternal[internalIdx=13]
		uint32_t t4=(((int32_t)(t2 * t3)) << 16) >> 16;//mul[targetSizeWithType=97]
		uint32_t t5=de_tuhh_hbubert_noiseCancel_simpleFir_coeffs[1];
		//loadInternal[internalIdx=1]
		uint32_t t6=de_tuhh_hbubert_noiseCancel_simpleFir_tap[1];
		//loadInternal[internalIdx=7]
		uint32_t t7=(((int32_t)(t5 * t6)) << 16) >> 16;//mul[targetSizeWithType=97]
		uint32_t t8=(((int32_t)(t4 + t7)) << 16) >> 16;//plus[targetSizeWithType=97]
		uint32_t t9=de_tuhh_hbubert_noiseCancel_simpleFir_coeffs[2];
		//loadInternal[internalIdx=2]
		uint32_t t10=de_tuhh_hbubert_noiseCancel_simpleFir_tap[2];
		//loadInternal[internalIdx=9]
		uint32_t t11=(((int32_t)(t9 * t10)) << 16) >> 16;//mul[targetSizeWithType=97]
		uint32_t t12=(((int32_t)(t8 + t11)) << 16) >> 16;//plus[targetSizeWithType=97]
		uint32_t t13=de_tuhh_hbubert_noiseCancel_simpleFir_coeffs[3];
		//loadInternal[internalIdx=3]
		uint32_t t14=de_tuhh_hbubert_noiseCancel_simpleFir_tap[3];
		//loadInternal[internalIdx=11]
		uint32_t t15=(((int32_t)(t13 * t14)) << 16) >> 16;//mul[targetSizeWithType=97]
		uint32_t t16=(((int32_t)(t12 + t15)) << 16) >> 16;//plus[targetSizeWithType=97]
		int32_t c17=t16 << 8;
		uint32_t t17=c17 >> 8;
		//cast_int[targetSize=24,currentSize=48]
		uint32_t current=de_tuhh_hbubert_noiseCancel_simpleFir_y$reg;
		de_tuhh_hbubert_noiseCancel_simpleFir_y$reg=t17;
		static regUpdate_t reg;
		if (current!=t17){
			reg.internal=8;
			reg.offset=0;
			regUpdates[regUpdatePos++]=reg;
		}
	}
	void s005frame008E() {
		de_tuhh_hbubert_noiseCancel_simpleFir_clk_update=((uint64_t) deltaCycle << 16l) | (epsCycle & 0xFFFF);//isRisingEdge[internalIdx=16]
		//negPredicate[internalIdx=15]
		uint32_t t2=de_tuhh_hbubert_noiseCancel_simpleFir_tap[2];
		//loadInternal[internalIdx=9]
		uint32_t current=de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[3];
		de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[3]=t2;
		static regUpdate_t reg;
		if (current!=t2){
			reg.internal=6;
			reg.offset=3;
			regUpdates[regUpdatePos++]=reg;
		}
	}
	void s006frame0090() {
		de_tuhh_hbubert_noiseCancel_simpleFir_clk_update=((uint64_t) deltaCycle << 16l) | (epsCycle & 0xFFFF);//isRisingEdge[internalIdx=16]
		//negPredicate[internalIdx=15]
		uint32_t t2=de_tuhh_hbubert_noiseCancel_simpleFir_x;
		//loadInternal[internalIdx=18]
		uint32_t current=de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[0];
		de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[0]=t2;
		static regUpdate_t reg;
		if (current!=t2){
			reg.internal=6;
			reg.offset=0;
			regUpdates[regUpdatePos++]=reg;
		}
	}
	void s007frame0069() {
		//posPredicate[internalIdx=15]
		de_tuhh_hbubert_noiseCancel_simpleFir_clk_update=((uint64_t) deltaCycle << 16l) | (epsCycle & 0xFFFF);//isRisingEdge[internalIdx=16]
		uint32_t t2=0;//const0
		uint32_t t3=t2 & 0xffffffll;//cast_uint[targetSize=24,currentSize=32]
		de_tuhh_hbubert_noiseCancel_simpleFir_y$reg=t3;
		{
			static regUpdate_t reg;
			reg.internal=8;
			reg.offset=-1;
			regUpdates[regUpdatePos++]=reg;
		}
		//writeInternal[internal=6]
		uint32_t t5=0;//const0
		//Write to #null 
		(void)t5;
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
	void pshdl_sim_run(){
		deltaCycle++;
		epsCycle=0;
		do {
			regUpdatePos=0;
		s000frame005D();
		s001frame005F();
		s001frame0092();
		s002frame0061();
		s003frame0063();
		bool de_tuhh_hbubert_noiseCancel_simpleFir_clk_isRising=true;
		bool de_tuhh_hbubert_noiseCancel_simpleFir_clk_risingIsHandled=false;
		if (!disableEdges){
			uint32_t t16=de_tuhh_hbubert_noiseCancel_simpleFir_clk;
			uint32_t t16_prev=de_tuhh_hbubert_noiseCancel_simpleFir_clk_prev;
			if ((t16_prev!=0) || (t16!=1)) {
				de_tuhh_hbubert_noiseCancel_simpleFir_clk_isRising=false;
			}
		} else {
			uint32_t t16=de_tuhh_hbubert_noiseCancel_simpleFir_clk;
			de_tuhh_hbubert_noiseCancel_simpleFir_clk_isRising=t16==1;
		}
		if (skipEdge(de_tuhh_hbubert_noiseCancel_simpleFir_clk_update)){
			de_tuhh_hbubert_noiseCancel_simpleFir_clk_risingIsHandled=true;
		}
		bool p15=_Pred_de_tuhh_hbubert_noiseCancel_simpleFir_rst;
		bool p15_fresh=true;
		uint64_t up15=_Pred_de_tuhh_hbubert_noiseCancel_simpleFir_rst_update;
		if ((up15>>16 != deltaCycle) || ((up15&0xFFFF) != epsCycle)){
			p15_fresh=false;
		}
		if (de_tuhh_hbubert_noiseCancel_simpleFir_clk_isRising&& !de_tuhh_hbubert_noiseCancel_simpleFir_clk_risingIsHandled && p15 && p15_fresh)
			s003frame006B();
		if (de_tuhh_hbubert_noiseCancel_simpleFir_clk_isRising&& !de_tuhh_hbubert_noiseCancel_simpleFir_clk_risingIsHandled && !p15 && p15_fresh)
			s003frame008A();
		if (de_tuhh_hbubert_noiseCancel_simpleFir_clk_isRising&& !de_tuhh_hbubert_noiseCancel_simpleFir_clk_risingIsHandled && !p15 && p15_fresh)
			s004frame008C();
		if (de_tuhh_hbubert_noiseCancel_simpleFir_clk_isRising&& !de_tuhh_hbubert_noiseCancel_simpleFir_clk_risingIsHandled && !p15 && p15_fresh)
			s005frame007A();
		if (de_tuhh_hbubert_noiseCancel_simpleFir_clk_isRising&& !de_tuhh_hbubert_noiseCancel_simpleFir_clk_risingIsHandled && !p15 && p15_fresh)
			s005frame008E();
		if (de_tuhh_hbubert_noiseCancel_simpleFir_clk_isRising&& !de_tuhh_hbubert_noiseCancel_simpleFir_clk_risingIsHandled && !p15 && p15_fresh)
			s006frame0090();
		if (de_tuhh_hbubert_noiseCancel_simpleFir_clk_isRising&& !de_tuhh_hbubert_noiseCancel_simpleFir_clk_risingIsHandled && p15 && p15_fresh)
			s007frame0069();
		updateRegs();
		epsCycle++;
		} while (regUpdatePos!=0 && !disabledRegOutputlogic);
		de_tuhh_hbubert_noiseCancel_simpleFir_clk_prev=de_tuhh_hbubert_noiseCancel_simpleFir_clk;
	}
void pshdl_sim_setInput(int idx, long value, ...) {
	va_list va_arrayIdx;
	(void)va_arrayIdx;
	switch (idx) {
		case 1: 
			_Pred_de_tuhh_hbubert_noiseCancel_simpleFir_rst=value==0?false:true;
			break;
		case 2: 
			value&=0xffffffffl;
			de_tuhh_hbubert_noiseCancel_simpleFir_Width=value;
			break;
		case 3: 
			value&=0x1l;
			de_tuhh_hbubert_noiseCancel_simpleFir_clk=value;
			break;
		case 4: 
			value&=0xffffffl;
			va_start(va_arrayIdx, value);
			de_tuhh_hbubert_noiseCancel_simpleFir_coeffs[va_arg(va_arrayIdx, int)]=value;
			va_end(va_arrayIdx);
			break;
		case 5: 
			value&=0x1l;
			de_tuhh_hbubert_noiseCancel_simpleFir_rst=value;
			break;
		case 6: 
			value&=0xffffffl;
			va_start(va_arrayIdx, value);
			de_tuhh_hbubert_noiseCancel_simpleFir_tap[va_arg(va_arrayIdx, int)]=value;
			va_end(va_arrayIdx);
			break;
		case 7: 
			value&=0xffffffl;
			de_tuhh_hbubert_noiseCancel_simpleFir_x=value;
			break;
		case 8: 
			value&=0xffffffl;
			de_tuhh_hbubert_noiseCancel_simpleFir_y=value;
			break;
	}
}

char* pshdl_sim_getName(int idx) {
	switch (idx) {
		case 1: return "$Pred_de.tuhh.hbubert.noiseCancel.simpleFir.rst";
		case 2: return "de.tuhh.hbubert.noiseCancel.simpleFir.Width";
		case 3: return "de.tuhh.hbubert.noiseCancel.simpleFir.clk";
		case 4: return "de.tuhh.hbubert.noiseCancel.simpleFir.coeffs";
		case 5: return "de.tuhh.hbubert.noiseCancel.simpleFir.rst";
		case 6: return "de.tuhh.hbubert.noiseCancel.simpleFir.tap";
		case 7: return "de.tuhh.hbubert.noiseCancel.simpleFir.x";
		case 8: return "de.tuhh.hbubert.noiseCancel.simpleFir.y";
	}
	return 0;
}

static int varIdx[]={1,2,3,4,5,6,7,8};
int* pshdl_sim_getAvailableVarIdx(int *numElements){
	*numElements=8;
	return varIdx;
}

uint32_t pshdl_sim_getOutput(int idx, ...) {
	va_list va_arrayIdx;
	(void)va_arrayIdx;
	switch (idx) {
		case 1: return _Pred_de_tuhh_hbubert_noiseCancel_simpleFir_rst?1:0;
		case 2: return de_tuhh_hbubert_noiseCancel_simpleFir_Width & 0xffffffffl;
		case 3: return de_tuhh_hbubert_noiseCancel_simpleFir_clk & 0x1l;
		case 4: {
			va_start(va_arrayIdx, idx);
			uint32_t res=de_tuhh_hbubert_noiseCancel_simpleFir_coeffs[va_arg(va_arrayIdx, int)] & 0xffffffl;
			va_end(va_arrayIdx);
			return res;
		}
		case 5: return de_tuhh_hbubert_noiseCancel_simpleFir_rst & 0x1l;
		case 6: {
			va_start(va_arrayIdx, idx);
			uint32_t res=de_tuhh_hbubert_noiseCancel_simpleFir_tap[va_arg(va_arrayIdx, int)] & 0xffffffl;
			va_end(va_arrayIdx);
			return res;
		}
		case 7: return de_tuhh_hbubert_noiseCancel_simpleFir_x & 0xffffffl;
		case 8: return de_tuhh_hbubert_noiseCancel_simpleFir_y & 0xffffffl;
	}
	return 0;
}	
