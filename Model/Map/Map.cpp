#include "Map.h"

using namespace std;

Map::Map(string n, string d, vector<Room*> r) : name(n), description(d), rooms(r)
{
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
