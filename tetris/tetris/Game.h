#pragma once
#include <Siv3D.hpp>

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