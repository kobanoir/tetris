
# include "Game.h"

void Main()
{
	Game game;

	Window::Resize(720, 1000);

	while (System::Update()){
		game.update();
		game.draw();
	}
}
