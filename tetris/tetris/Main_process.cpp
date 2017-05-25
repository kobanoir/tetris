#include "Main_process.h"

void Process::process() {
	if (next.size() == 0) {
		int minono;
		minono = block.get_mino();
		mino = block.get_mino1(minono);
		if (minono == 0) {
			vector<int> hoge(4);
			for (int i = 0; i < 4; i++) {
				next.push_back(hoge);
			}
		}
		else if (minono == 1) {
			vector<int> hoge(2);
			for (int i = 0; i < 2; i++) {
				next.push_back(hoge);
			}
		}
		else{
			vector<int> hoge(3);
			for (int i = 0; i < 3; i++) {
				next.push_back(hoge);
			}
		}
		mino = block.get_mino2(minono);
	}
}