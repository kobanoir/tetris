#pragma once
#include <Siv3D.hpp>
#include <vector>
using namespace std;

class Map {
public:
	void map_draw();

	void next_draw(int **next,int i);

	void draw_map(int **map);

	void draw_mino(vector<int*>ope, vector<int*>pos_x,vector<int*>pos_y);
};