#include "UserInterface.h"

int main(int argc, char* argv[])
{
	std::cout << "Welcome to Dungeons and Commas!" << std::endl;
	std::string character = UserInterface::Prompt("What is your username?");
	int result = UserInterface::Decision_Prompt("Choose your class", {"Fighter", "Rogue"});
	std::cout << result << std::endl;
	return 0;
}
