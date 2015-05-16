#include "UserInterface.h"
#include <stdexcept>

int UserInterface::Decision_Prompt(std::string prompt, std::vector<std::string> choices)
{
	// Output the information
	std::cout << prompt << std::endl;
	// Output and number the choices
	for(std::vector<std::string>::size_type i = 0; i < choices.size(); i++)
	{
		std::cout << i+1 << ": " << choices[i] << std::endl;
	}

	unsigned int userInput;
 	std::string rawInput;
	// Repeatedly read input from stdin until a valid option is
	// chosen
	while(true)
	{
		std::cout << UserInterface::promptChar;
		std::getline(std::cin, rawInput);
		try
		{
			userInput = std::stoi(rawInput);
		}
		catch (std::invalid_argument& e)
		{
			continue;
		}
		catch (std::out_of_range& e)
		{
			continue;
		}
		// 'Valid' means within the range of numbers outputted
		if(userInput > 0 && userInput <= choices.size())
		{
			return userInput - 1;
		}
	}
	return 0;
}

std::string UserInterface::Prompt(std::string prompt)
{
	std::string toReturn;
	if(!prompt.empty())
	{
		std::cout << prompt << std::endl;
	}
	std::cout << UserInterface::promptChar;
	std::getline(std::cin, toReturn);
	return toReturn;
}

void UserInterface::Message(std::string message)
{
	std::cout << message << std::endl;
}
