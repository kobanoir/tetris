#pragma once
#include <Siv3D.hpp>

class Block {
public:
	Block();

	void make_block();

private:
	//4*2‚Ìƒ~ƒm‚ð7ŒÂŠi”[‚Å‚«‚é
	int block[4][2][7];
};
