#include "Player.h"

Player::Player(std::string name) : Player(name, 0, 0, 0, 0, 0, 0, 0, 0, 0)
{

}
Player::Player(std::string name, int str, double hr, int end, int maxHealth, 
			int health, int dex, int intel, int maxMana, int mana)
{
	this->name = name;
	this->strength = str;
	this->hitRate = hr;
	this->endurance = end;
	this->maxHealth = maxHealth;
	this->health = health;
	this->dexterity = dex;
	this->intelligence = intel;
	this->maxMana = maxMana;
	this->mana = mana;
	this->level = 0;
	this->experience = 0;
	this->inventory = new Backpack();
}
Player::~Player()
{
	delete this->inventory;
}
