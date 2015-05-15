#ifndef TEST_HPP
#define TEST_HPP

#include "Model/Map/Room.h"

class test
{
	public:	
		static Room* createRoom()
		{
			return new Room("Test Room", "This is a test Room");
		}
};

#endif
