#include "Block.h"
#include <random>

Block::Block() {
	make_mino();
}

void Block::make_mino() {
	//–_
	tetris[2][0] = 1;
	tetris[2][1] = 1;
	tetris[2][2] = 1;
	tetris[2][3] = 1;
	//lŠpŒ`
	square[0][0] = 1;
	square[0][1] = 1;
	square[1][0] = 1;
	square[1][1] = 1;
	//ŠK’iA
	stairA[1][0] = 1;
	stairA[2][0] = 1;
	stairA[0][1] = 1;
	stairA[1][1] = 1;
	//ŠK’iB
	stairB[0][0] = 1;
	stairB[1][0] = 1;
	stairB[1][1] = 1;
	stairB[2][1] = 1;
	//çêA
	hookA[0][0] = 1;
	hookA[0][1] = 1;
	hookA[1][1] = 1;
	hookA[2][1] = 1;
	//çêB
	hookB[2][0] = 1;
	hookB[0][1] = 1;
	hookB[1][1] = 1;
	hookB[2][1] = 1;
	//TšƒuƒƒbƒN
	tletter[1][0] = 1;
	tletter[0][1] = 1;
	tletter[1][1] = 1;
	tletter[2][1] = 1;
}

int Block::get_mino() {
	random_device rnd;
	int i = rnd() % 7;
	switch (i) {
	case 0:
		break;
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		break;
	}
}