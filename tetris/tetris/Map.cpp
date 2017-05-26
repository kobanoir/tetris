#include "Map.h"

void Map::map_draw() {
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

void Map::next_draw(int **next,int hoge) {
	for (int i = 0; i < hoge; i++) {
		for (int j = 0; j < hoge; j++) {
			if (next[i][j] == 1) {
				Rect(590 + 20 * i, 100 + 20 * j, 20, 20).draw(Palette::Greenyellow);
				Rect(590 + 20 * i, 100 + 20 * j, 20, 20).drawFrame(2, 0, Palette::Green);
			}
		}
	}
}