#pragma once
#include <Siv3D.hpp>
#include <vector>
using namespace std;

class Block {
public:
	Block();
	
	void make_mino();

private:
	int tetris[4][4];
	int square[2][2];
	int stairA[3][3];
	int stairB[3][3];
	int hookA[3][3];
	int hookB[3][3];
	int tletter[3][3];
};
