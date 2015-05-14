#include "UserInterface.h"
#include "./Model/Character/Player.h"

int main(int argc, char* argv[])
{
	std::cout << "Welcome to Dungeons and Commas!" << std::endl;
	std::string character = UserInterface::Prompt("What is your username?");
	Player* newChar = new Player(character);
	UserInterface::Message("Created New Player: " + newChar->name);

	std::vector<std::string> classes {"Fighter", "Rogue"};
	int result = UserInterface::Decision_Prompt("Choose your class", classes);
	UserInterface::Message("You have selected: " + classes[result]);
	
	UserInterface::Message(std::to_string(newChar->health));
	return 0;
}
