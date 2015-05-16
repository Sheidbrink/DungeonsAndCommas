#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"

class Player : public Character
{
	public:
		Player(std::string n, int s, double hR, int e, int mH, 
			int h, int d, int i, int mM, int m);
		Player(std::string name);
		~Player();
	private:
};

#endif
