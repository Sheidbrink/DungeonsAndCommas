#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include "../Character/Backpack.h"

class Character
{
	public:
		Character(std::string n, int s, double hR, int e, int mH, 
			int h, int d, int i, int mM, int m) : name(n), strength(s), hitRate(hR),
			endurance(e), maxHealth(mH), health(h), dexterity(d), intelligence(i),
			maxMana(mM), mana(m), inventory(){}
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
		Backpack inventory;
	private:
};

#endif
