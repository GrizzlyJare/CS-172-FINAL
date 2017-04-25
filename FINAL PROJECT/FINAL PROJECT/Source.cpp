#include <vector>
#include <iostream>

#include "Display.h"
#include "Player.h"
#include "GettingInput.h"

using namespace std;

int main() {
	system("CLS");
	Display Screen;
	Player p1;
	Screen.Entities.push_back(p1.getSprite());
	Screen.print();

	int c = 0;
	ShowConsoleCursor(false);
	while (1)
	{
		c = 0;

		switch ((c = getch())) {
		case KEY_UP:
			p1.up(); //key up
			break;
		case KEY_DOWN:
			p1.down();   // key down
			break;
		case KEY_LEFT:
			p1.left();  // key left
			break;
		case KEY_RIGHT:
			p1.right();  // key right
			break;
		default:
			break;
		}
		system("CLS");
		Screen.print();
	}

	return 0;
}