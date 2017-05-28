#include "Main_process.h"

Process::Process() {
	for (int i = 0;i < 8;i++) {
		for (int j = 0;j < 10;j++) {
			stage[i][j] = 0;
		}
	}
	System::ResetFrameCount();
}

void Process::process() {
	make_mino();
	move_next();
	draw_mino();
	draw_map();
	down_mino();
}

void Process::draw() {
	map.map_draw();
	int* top_next[4];
	for (int i = 0; i < next.size(); i++) {
		top_next[i] = &next[i][0];
	}
	map.next_draw(top_next,next.size());
}

void Process::make_mino() {
	if (next.empty() == true) {
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
		for (int i = 0; i < roop; i++, mino++) {
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

void Process::move_next() {
	if (ope.empty() == true) {
		ope = next;
	}
	if (ope_pos.empty() == true) {
		for (int i = 0;i < next.size();i++) {
			vector<pair<int, int>> hoge(next.size());
			ope_pos.push_back(hoge);
			for (int j = 0;j < next.size();j++) {
				ope_pos[i][j].first = j + 3;
				ope_pos[i][j].second = i;
			}
		}
		erase_next();
	}
}

void Process::draw_mino() {
	vector<int*> op;
	vector<int*> pos_x;
	vector<int*> pos_y;
	for (int i = 0;i < ope.size();i++) {
		op.push_back(&ope[i][0]);
		pos_x.push_back(&ope_pos[i][0].first);
		pos_y.push_back(&ope_pos[i][0].second);
	}
	map.draw_mino(op,pos_x,pos_y);
}

void Process::draw_map() {
	int* x[10];
	for (int i = 0;i < 10;i++) {
		x[i] = &stage[i][0];
	}
	map.draw_map(x);
}

void Process::erase_next() {
	for (;;) {
		if (next.empty() == false) {
			next.pop_back();
		}
		else {
			break;
		}
	}
}

void Process::down_mino() {
	if (System::FrameCount() % 60 == 0) {
		for (int i = 0;i < ope_pos.size();i++) {
			for (int j = 0;j < ope_pos.size();j++) {
				if (ope_pos[i][j].second != 19) {
					ope_pos[i][j].second++;
				}
			}
		}
	}
}