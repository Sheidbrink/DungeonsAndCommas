#ifndef COMMANDS_H
#define COMMANDS_H

#include "../Model/Character/Player.h"
#include "../Model/Game.h"
#include <string>

class Commands
{
	public:
		static void ViewBackpack(Player* p);
		static void ViewStats(Player* p);
		static void ViewSkillbar(Player* p);
		static void ViewLog(Player* p);
		static void WalkTo(Player* p, Room* r);
		static void UseAbility(Player* p, Player* target);
		static void LookAround(Player* p);
		static void Say(Player* from, std::string to, std::string message);
		static void LookAt(std::string object);
		static void SetGameModel(Game* m);
	private:
		static Game* model;
};

#endif
