#include "Map.h"

using namespace std;

Map::Map(string name, string description, vector<Room*> rooms)
{
	this->name = name;
	this->description = description;
	this->rooms = rooms;
}
void Map::AddRoom(Room* room)
{
	this->rooms.push_back(room);
}
Map::~Map()
{
	for(vector<Room*>::size_type i = 0; i < rooms.size(); i++)
	{
		delete rooms[i];
	}
	rooms.clear();
}
