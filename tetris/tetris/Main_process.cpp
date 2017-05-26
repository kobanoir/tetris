#include "Main_process.h"

void Process::process() {
	if (next.size() == 0) {
		int minono;
		int roop;
		minono = block.get_mino();
		//ƒ~ƒm‚É‚ ‚í‚¹‚½—ÌˆæŠm•Û
		if (minono == 0) {
			vector<int> hoge(4);
			roop = 4;
			for (int i = 0; i < 4; i++) {
				next.push_back(hoge);
			}
		}
		else if (minono == 1) {
			vector<int> hoge(2);
			roop = 2;
			for (int i = 0; i < 2; i++) {
				next.push_back(hoge);
			}
		}
		else {
			vector<int> hoge(3);
			roop = 3;
			for (int i = 0; i < 3; i++) {
				next.push_back(hoge);
			}
		}
		mino = block.get_mino1(minono);
		for (int i = 0; i < roop; i++,mino++) {
			next[0][i] = *mino;
		}
		mino = block.get_mino2(minono);
		for (int i = 0; i < roop; i++, mino++) {
			next[1][i] = *mino;
		}
		if (minono != 1) {
			mino = block.get_mino3(minono);
			for (int i = 0; i < roop; i++, mino++) {
				next[2][i] = *mino;
			}
		}
		if (minono == 0) {
			mino = block.get_mino4(minono);
			for (int i = 0; i < roop; i++, mino++) {
				next[3][i] = *mino;
			}
		}
	}
}

void Process::draw() {
	map.map_draw();
	int* top_next[4];
	for (int i = 0; i < next.size(); i++) {
		top_next[i] = &next[i][0];
	}
	map.next_draw(top_next,next.size());
}