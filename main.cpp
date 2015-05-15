#include "UserInterface.h"
#include "./Model/Character/Player.h"
#include "test.hpp"

int main(int argc, char* argv[])
{
	// Start Game
	UserInterface::Message("Welcome to Dungeons and Commas!");
	// Sign in/Create Player
	std::string character = UserInterface::Prompt("What is your username?");
	//Check if Character Exists
		//Otherwise Create new Player
		Player* newChar = new Player(character);
		UserInterface::Message("Created New Player: " + newChar->name);
		Room* testRoom = test::createRoom();
		UserInterface::Message(testRoom->EnterCreature(newChar));
	// Prompt of them waking up
	std::string command = UserInterface::Prompt("Well that was weird passing out again");
	while(command.compare("sleep") != 0)
	{
		command = UserInterface::Prompt("");
	}
	
	return 0;
}
