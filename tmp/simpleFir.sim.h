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
	uint64_t de_tuhh_hbubert_noiseCancel_simpleFir_Width;
	uint64_t Pred_de_tuhh_hbubert_noiseCancel_simpleFir_rst_update=0;
	bool Pred_de_tuhh_hbubert_noiseCancel_simpleFir_rst;
	uint64_t de_tuhh_hbubert_noiseCancel_simpleFir_x;
	uint64_t de_tuhh_hbubert_noiseCancel_simpleFir_tap[4];
	uint64_t de_tuhh_hbubert_noiseCancel_simpleFir_tap$reg[4];
	uint64_t de_tuhh_hbubert_noiseCancel_simpleFir_rst;
	uint64_t de_tuhh_hbubert_noiseCancel_simpleFir_clk_update=0;
	uint64_t de_tuhh_hbubert_noiseCancel_simpleFir_clk;
	uint64_t de_tuhh_hbubert_noiseCancel_simpleFir_clk_prev;
	uint64_t de_tuhh_hbubert_noiseCancel_simpleFir_y;
	uint64_t de_tuhh_hbubert_noiseCancel_simpleFir_y$reg;
	int epsCycle=0;
	int deltaCycle=0;
	void framec61();
	void framec51();
	void framec59();
	void framec5b();
	void framec41();
	void framec5d();
	void framec43();
	void framec5f();
	bool skipEdge(uint64_t local);
	void updateRegs();
	void run();