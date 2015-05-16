#ifndef BACKPACK_H
#define BACKPACK_H

#include <string>
#include <vector>
#include "../Items/Item.h"

class Backpack
{
	public:
		Backpack();
		~Backpack();
		void addItem(Item*);
		void removeItem(Item*);
		void removeItem(std::string name);
	private:
		std::vector<Item*> items;
};

#endif
