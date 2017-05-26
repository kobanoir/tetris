#pragma once
#include <Siv3D.hpp>

class Map {
public:
	void map_draw();

	void next_draw(int **next,int i);
};