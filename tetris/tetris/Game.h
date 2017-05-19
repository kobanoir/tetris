#pragma once
#include <Siv3D.hpp>
#include "Main_process.h"

class Process;

class Game {
public:
	enum State {
		START,
		GAME,
		RESULT,
	};
	Game();

	void update();
	void draw();

	void map_draw();

private:
	State state;
};