#include "./View/UserInterface.h"
#include "./Model/Character/Player.h"
#include "./Model/Game.h"

int main(int argc, char* argv[])
{
	// Start Game
	UserInterface::Message("Welcome to Dungeons and Commas!");
	// Sign in/Create Player
	std::string characterName = UserInterface::Prompt("What is your username?");
	Player* character = NULL;
	Room* currentRoom;
	std::string command;
	//Check if Character Exists
	if(character == NULL)
	{
		//Otherwise Create new Player
		character = new Player(characterName);
		UserInterface::Message("Created New Player: " + character->name);
		UserInterface::Message("You randomly appear in a strange new world");
		// Randomize where they are put? that could be fun
		currentRoom = new Room("This is a room", "A test room");
		UserInterface::Message(currentRoom->EnterCreature(character));
	}
	else
	{
		// Prompt of them waking up
		command = UserInterface::Prompt("Well that was weird passing out again");
	}
	while(command.compare("sleep") != 0)
	{
		command = UserInterface::Prompt("");
	}
	// Save whatever needs saving and cleanup
	delete character;
	delete currentRoom;
	return 0;
}
