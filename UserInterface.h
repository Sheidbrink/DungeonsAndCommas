#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include <string>
#include <vector>
#include <iostream>

class UserInterface
{
	public:
		static const char promptChar = '>';
		static std::string Prompt(std::string prompt);
		static int Decision_Prompt(std::string prompt, std::vector<std::string> choices);
	private:
		
};

#endif
