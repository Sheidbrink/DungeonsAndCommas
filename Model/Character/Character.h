#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include "../Character/Backpack.h"

class Character
{
	public:
		Character(){}
		~Character(){}
		std::string name;
		int strength;
		double hitRate;

		int endurance;
		int maxHealth;
		int health;

		int dexterity;

		int intelligence;
		int maxMana;
		int mana;

		unsigned int level;
		unsigned int experience;
		Backpack* inventory;
	private:
};

#endif
