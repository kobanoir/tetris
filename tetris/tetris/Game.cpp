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
		process.process();
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
		process.draw();
		break;
	case RESULT:
		font(L"result").draw();
		break;
	}
}