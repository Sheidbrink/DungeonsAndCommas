#include "Room.h"

using namespace std;

Room::Room(string n, string d) : name(n), description(d)
{
}

std::string Room::EnterCreature(Character* character)
{
	return this->description;
}
