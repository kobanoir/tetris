#include "Block.h"

Block::Block() {
	make_mino();
}

void Block::make_mino() {
	//棒
	tetris[2][0] = 1;
	tetris[2][1] = 1;
	tetris[2][2] = 1;
	tetris[2][3] = 1;
	//四角形
	square[0][0] = 1;
	square[0][1] = 1;
	square[1][0] = 1;
	square[1][1] = 1;
	//階段A
	stairA[1][0] = 1;
	stairA[2][0] = 1;
	stairA[0][1] = 1;
	stairA[1][1] = 1;
	//階段B
	stairB[0][0] = 1;
	stairB[1][0] = 1;
	stairB[1][1] = 1;
	stairB[2][1] = 1;
	//鉤A
	hookA[0][0] = 1;
	hookA[0][1] = 1;
	hookA[1][1] = 1;
	hookA[2][1] = 1;
	//鉤B
	hookB[2][0] = 1;
	hookB[0][1] = 1;
	hookB[1][1] = 1;
	hookB[2][1] = 1;
	//T字ブロック
	tletter[1][0] = 1;
	tletter[0][1] = 1;
	tletter[1][1] = 1;
	tletter[2][1] = 1;
}