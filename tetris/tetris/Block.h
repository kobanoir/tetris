#pragma once
#include <Siv3D.hpp>

class Block {
public:
	Block();

	void make_block();

private:
	//4*2�̃~�m��7�i�[�ł���
	int block[4][2][7];
};
