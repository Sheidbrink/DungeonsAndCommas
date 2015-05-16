#ifndef MAP_H
#define MAP_H

#include <vector>
#include <string>
#include "Room.h"

class Map
{
	public:
		std::string name;
		std::string description;
		std::vector<Room*> rooms;
		Map(std::string name, std::string desc, std::vector<Room*> room);
		void AddRoom(Room* room);
		~Map();
	private:
};

#endif
