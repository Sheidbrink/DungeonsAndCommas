#include "Room.h"

Room::Room(std::string name, std::string desc)
{
	this->name = name;
	this->description = desc;
}

std::string Room::EnterCreature(Character* character)
{
	return this->description;
}
