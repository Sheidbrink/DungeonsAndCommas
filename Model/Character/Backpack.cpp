#include "Backpack.h"
#include <algorithm>

using namespace std;

Backpack::Backpack()
{

}

Backpack::~Backpack()
{
	for(vector<Item>::size_type i; i < items.size(); i++)
	{
		delete items[i];
	}
	items.clear();
}

void Backpack::addItem(Item* toAdd)
{
	items.push_back(toAdd);
}

void Backpack::removeItem(Item* toRemove)
{
	items.erase(remove(items.begin(), items.end(), toRemove), items.end());
}

void Backpack::removeItem(string name)
{
	int toDelete;
	for(vector<Item>::size_type i; i < items.size(); i++)
	{
		if(items[i]->name.compare(name) == 0)
		{
			toDelete = i;
			i = items.size();
		}
	}
	items.erase(items.begin() + toDelete);
}
