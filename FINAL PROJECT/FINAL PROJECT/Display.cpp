#include "Display.h"

void Display::_delete()
{
	while (!pixels.empty()) {
		while (!pixels[pixels.size() - 1].empty()) {
			pixels[pixels.size() - 1].pop_back();
		}
	}

}

void Display::space_screen()
{
	vector<vector<char>> thing(20, vector<char>(80, default_char));
	pixels.swap(thing);
}

void Display::populate_screen()
{
	for (unsigned ent_count = 0; ent_count < Entities.size(); ent_count++) {
		for (unsigned pix_count = 0; pix_count < Entities[ent_count]->pixels.size(); pix_count++) {
			Pixel this_pix = Entities[ent_count]->pixels.at(pix_count);
			pixels[this_pix.get_y()][this_pix.get_x()] = this_pix.get_char();
		}
	}
}

Display::Display()
{
	space_screen();
}

void Display::print()
{
	space_screen();
	populate_screen();
	for (int i = pixels.size() - 1; i >= 0; i--) {
		for (int j = 0; j < pixels[i].size(); j++) {
			cout << pixels[i][j];
		}
		cout << endl;
	}
}
