#pragma once
#include <Siv3D.hpp>
#include "Block.h"
#include "Map.h"

class Block;
class Map;

class Process {
public:
	Process();

	void process();

	void draw();

	void make_mino();
	void move_next();
	void draw_mino();
	void draw_map();
	void erase_next();
	void down_mino();
private:
	int *mino;
	int stage[10][20];
	vector<vector<int>> next;
	vector<vector<int>> ope;
	vector<vector<pair<int,int>>> ope_pos;
	Block block;
	Map map;
};