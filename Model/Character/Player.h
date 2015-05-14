#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"

class Player : public Character
{
	public:
		Player(std::string name, int str, double hr, int end, int maxHealth, 
			int health, int dex, int intel, int maxMana, int mana);
		Player(std::string name);
	private:
};

#endif
