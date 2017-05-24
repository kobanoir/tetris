#pragma once
#include <Siv3D.hpp>
#include "Block.h"
#include "Map.h"

class Block;
class Map;

class Process {
public:
	void process();
private:
	vector<vector<int>> next;
	Block block;
};