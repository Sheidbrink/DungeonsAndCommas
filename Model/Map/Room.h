#ifndef ROOM_H
#define ROOM_H

#include "../Character/Character.h"
#include "../Items/Item.h"
#include <vector>

class Room
{
	public:
		std::string name;
		std::string description;
		std::vector<Character> charactersInRoom;
		std::vector<Item> itemsInRoom;
		Room(std::string name, std::string desc);
		std::string EnterCreature(Character* character);
};

#endif
