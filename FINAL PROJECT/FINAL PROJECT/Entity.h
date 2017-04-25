//Project: Make a working videogame
//File: Define the entity and pixel class that are used when displaying the things in the videogame to the screen
//Last Updated on: 04/16/2017
//by: Cameron Rutherford

#ifndef ENTITY_
#define ENTITY_

#include <vector>
#include <iostream>

using namespace std;

class Pixel {
private:
	int x_pos; //x position of the pixel to be printed
	int y_pos; //y position of hte pixel to be printed
	char pixel; //character of the pixel to be printed
public:
	Pixel(int, int, char); //Default constructor for pixel that takes the x and y coord to be printed
	int get_x() { return x_pos; }; //Getters and setters for the private variables
	int get_y() { return y_pos; };
	int get_char() { return pixel; };
	void set_x(int x) { x_pos = x; }
	void set_y(int y) { y_pos = y; }
	void set_char(char c) { pixel = c; }
};

class Entity {
private:
	bool player;
	bool enemy;
	bool environment;
public:
	Entity();
	Entity(vector<Pixel> things);
	vector<Pixel> pixels;
};

#endif