#ifndef PLAYER_H_
#define PLAYER_H_

#include "Entity.h"

class Player {
private:
	Entity * Sprite;
	//Any gameplay elements like health, weapon, status, items etc...
public:
	Player();
	void up();
	void down();
	void left();
	void right();
	Entity * getSprite() { 
		return Sprite; 
	}
};

#endif