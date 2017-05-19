#include "Game.h"

Game::Game() {
	state = State::START;
}

void Game::update() {
	switch (state) {
	case START:
		if (Input::KeySpace.clicked) {
			state = State::GAME;
		}
		break;
	case GAME:
		if (Input::KeySpace.clicked) {
			state = State::RESULT;
		}
		break;
	case RESULT:
		if (Input::KeySpace.clicked) {
			state = State::START;
		}
		break;
	}
}

void Game::draw() {
	static Font font(30);
	switch (state) {
	case START:
		font(L"start").draw();
		break;
	case GAME:
		map_draw();
		break;
	case RESULT:
		font(L"result").draw();
		break;
	}
}

void Game::map_draw() {
	static Font font(20);
	for (int i = 0; i <= 10; i++) {
		Line(i * 50, 0, i * 50, 1000).draw();
	}
	for (int i = 0; i <= 20; i++) {
		Line(0, i * 50, 500, i * 50).draw();
	}
	font(L"Next").draw(540, 10);
	RoundRect(560, 50, 130, 150, 30).drawFrame(5);
	font(L"Stock").draw(540, 220);
	RoundRect(560, 260, 130, 150, 30).drawFrame(5);
}