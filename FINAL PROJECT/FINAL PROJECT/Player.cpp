#include "Player.h"

Player::Player()
{
	Sprite = new Entity;
	Sprite->pixels.push_back(Pixel(0, 0, '\\'));
	Sprite->pixels.push_back(Pixel(1, 0, '_'));
	Sprite->pixels.push_back(Pixel(2, 0, '/'));
	Sprite->pixels.push_back(Pixel(0, 1, '('));
	Sprite->pixels.push_back(Pixel(2, 1, ')'));
	Sprite->pixels.push_back(Pixel(0, 2, '/'));
	Sprite->pixels.push_back(Pixel(1, 3, '_'));
	Sprite->pixels.push_back(Pixel(2, 2, '\\'));
}

void Player::up()
{
	for (unsigned i = 0; i < Sprite->pixels.size(); i++) {
		Sprite->pixels[i].set_y(Sprite->pixels[i].get_y() + 1);
	}
}

void Player::down()
{
	for (unsigned i = 0; i < Sprite->pixels.size(); i++) {
		Sprite->pixels[i].set_y(Sprite->pixels[i].get_y() - 1);
	}
}

void Player::left()
{
	for (unsigned i = 0; i < Sprite->pixels.size(); i++) {
		Sprite->pixels[i].set_x(Sprite->pixels[i].get_x() - 1);
	}
}

void Player::right()
{
	for (unsigned i = 0; i < Sprite->pixels.size(); i++) {
		Sprite->pixels[i].set_x(Sprite->pixels[i].get_x() + 1);
	}
}
