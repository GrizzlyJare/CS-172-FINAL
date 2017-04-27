//Project: Make a working videogame
//File: Define the entity and pixel class that are used when displaying the things in the videogame to the screen
//Last Updated on: 04/16/2017
//by: Cameron Rutherford

#ifndef ENTITY_
#define ENTITY_

#include <vector>
#include <iostream>

using namespace std;

class Entity;
class Pixel;

class Pixel {
private:
	int * x_pos;
	int * y_pos;
	int x_offset; //x offset of the pixel
	int y_offset; //y offset of the pixel
	char pixel; //character of the pixel to be printed
public:
	Pixel(int, int, char, Entity); //Default constructor for pixel that takes the x and y coord to be printed
	int get_x() { return *x_pos + x_offset; }; //Getters and setters for the private variables
	int get_y() { return *y_pos + y_offset; };
	int get_char() { return pixel; };
	void set_x_offset(int x) { x_offset = x; }
	void set_y_offset(int y) { y_offset = y; }
	void set_char(char c) { pixel = c; }
};

class Entity {
private:
/*
	bool player;
	bool enemy;
	bool environment;
*/
public:
	int * x_position; //this will be the x coord of the bottom left of the entity
	int * y_position; //this will be the y coord of the bottom left of the entity
	Entity(int, int);
	Entity(int, int, vector<Pixel> things);
	vector<Pixel> pixels;
	int * get_x_position();
	int * get_y_position();
	void up() { (*y_position)++; }
	void down() { (*y_position)--; }
	void right() { (*x_position)++; }
	void left() { (*x_position)--; }
};

#endif