#include "Entity.h"

Pixel::Pixel(int x, int y, char pixel, Entity thing)
{
	this->pixel = pixel;
	x_offset = x;
	y_offset = y;
	x_pos = thing.get_x_position();
	y_pos = thing.get_y_position();
}

Entity::Entity(int x, int y)
{
	x_position = new int(x);
	y_position = new int(y);
}

Entity::Entity(int x, int y, vector<Pixel> things)
{
	x_position = &x;
	y_position = &y;
	pixels = things;
}

int * Entity::get_x_position()
{
	return x_position;
}

int * Entity::get_y_position()
{
	return y_position;
}
