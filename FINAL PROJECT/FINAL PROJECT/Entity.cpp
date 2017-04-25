#include "Entity.h"

Pixel::Pixel(int x, int y, char pixel)
{
	this->pixel = pixel;
	x_pos = x;
	y_pos = y;
}

Entity::Entity()
{
}

Entity::Entity(vector<Pixel> things)
{
	pixels = things;
}
