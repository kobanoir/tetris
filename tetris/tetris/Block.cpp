#include "Block.h"

Block::Block() {
	make_mino();
}

void Block::make_mino() {
	//�_
	tetris[2][0] = 1;
	tetris[2][1] = 1;
	tetris[2][2] = 1;
	tetris[2][3] = 1;
	//�l�p�`
	square[0][0] = 1;
	square[0][1] = 1;
	square[1][0] = 1;
	square[1][1] = 1;
	//�K�iA
	stairA[1][0] = 1;
	stairA[2][0] = 1;
	stairA[0][1] = 1;
	stairA[1][1] = 1;
	//�K�iB
	stairB[0][0] = 1;
	stairB[1][0] = 1;
	stairB[1][1] = 1;
	stairB[2][1] = 1;
	//��A
	hookA[0][0] = 1;
	hookA[0][1] = 1;
	hookA[1][1] = 1;
	hookA[2][1] = 1;
	//��B
	hookB[2][0] = 1;
	hookB[0][1] = 1;
	hookB[1][1] = 1;
	hookB[2][1] = 1;
	//T���u���b�N
	tletter[1][0] = 1;
	tletter[0][1] = 1;
	tletter[1][1] = 1;
	tletter[2][1] = 1;
}