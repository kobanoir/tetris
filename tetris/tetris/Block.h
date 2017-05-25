#pragma once
#include <Siv3D.hpp>
#include <vector>
using namespace std;

class Block {
public:
	Block();

	int get_mino();
	int* get_mino1(int i);
	int* get_mino2(int i);
	int* get_mino3(int i);
	int* get_mino4(int i);

private:
	void make_mino();

	int tetris[4][4];
	int square[2][2];
	int stairA[3][3];
	int stairB[3][3];
	int hookA[3][3];
	int hookB[3][3];
	int tletter[3][3];
};
