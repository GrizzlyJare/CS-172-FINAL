#include "Player.h"

Player::Player()
{
	Sprite = new Entity(1,1);
	Sprite->pixels.push_back(Pixel(0, 0, '\\', *Sprite));
	Sprite->pixels.push_back(Pixel(1, 0, '_', *Sprite));
	Sprite->pixels.push_back(Pixel(2, 0, '/', *Sprite));
	Sprite->pixels.push_back(Pixel(0, 1, '<', *Sprite));
	Sprite->pixels.push_back(Pixel(2, 1, '>', *Sprite));
	Sprite->pixels.push_back(Pixel(0, 2, '/', *Sprite));
	Sprite->pixels.push_back(Pixel(1, 3, '_', *Sprite));
	Sprite->pixels.push_back(Pixel(2, 2, '\\', *Sprite));
}

void Player::up()
{
	Sprite->up();
}

void Player::down()
{
	Sprite->down();
}

void Player::left()
{
	Sprite->left();
}

void Player::right()
{
	Sprite->right();
}
