#include "UserInterface.h"

int main(int argc, char* argv[])
{
	std::cout << "Welcome to Dungeons and Commas!" << std::endl;
	std::string character = UserInterface::Prompt("What is your username?");
	std::vector<std::string> classes {"Fighter", "Rogue"};
	int result = UserInterface::Decision_Prompt("Choose your class", classes);
	UserInterface::Message("You have selected: " + classes[result]);
	return 0;
}
