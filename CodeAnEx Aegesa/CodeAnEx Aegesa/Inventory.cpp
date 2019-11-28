#include "inventory.h"
#include <iostream>
#include <string>
#include <map>
#include <stack>

// use tha multimap function

using namespace std;

inventory::inventory()
{
	headw = nullptr;
	heada = nullptr;
	headi = nullptr;
}

inventory::inventory(int)
{
}

inventory::inventory(const inventory&)
{
	capacity = MAX_INTEGRITY;
}

inventory::inventory(weapon)
{
}

inventory::inventory(armor)
{
}

inventory::inventory(item)
{
}

void inventory::push(int)
{
}

void inventory::pop(int&)
{
}

bool inventory::isFull() const
{
	return false;
}

bool inventory::isEmpty() const
{
	return false;
}

void inventory::appendNodeItem(item, int sitm)
{
	item* newNode;
	item* nodePtr;

	// allocation
	newNode = new item;
	newNode->ivalue = sitm; //value 
}

void inventory::appendNodeWeapon(weapon, int w)
{
	weapon* newNode;
	weapon* nodePtr;

	// allocation
	newNode = new weapon;
	newNode->wvalue = w; //value 
}

void inventory::appendNodeArmor(armor, int a)
{
	armor* newNode;
	armor* nodePtr;

	// allocation
	newNode = new armor;
	newNode->avalue = a; //value 
}

void inventory::insertNodeItem(item, int)
{
}

void inventory::insertNodeWeapon(weapon, int)
{
}

void inventory::insertNodeArmor(armor, int)
{
}

void inventory::deleteNodeItem(item, int)
{
}

void inventory::deleteNodeWeapon(weapon, int)
{
}

void inventory::deleteNodeArmor(armor, int)
{
}

void inventory::displaylistItem() const
{
}

void inventory::displaylistWeapon() const
{
}

void inventory::displaylistArmor() const
{
}

inventory::~inventory()
{
	delete [] stackArray;
}
