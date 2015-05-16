#include "Room.h"

using namespace std;

Room::Room(string name, string desc)
{
	this->name = name;
	this->description = desc;
}

std::string Room::EnterCreature(Character* character)
{
	return this->description;
}
