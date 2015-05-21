#ifndef GAME_H
#define GAME_H

#include <vector>
#include "Map/Map.h"
#include "Character/Character.h"

class Game
{
	public:
		std::vector<Map*> maps;
		std::vector<Character*> characters;
	private:
};

#endif
