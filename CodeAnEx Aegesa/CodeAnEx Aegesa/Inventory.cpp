#include "inventory.h"
#include <iostream>
#include <string>
#include <map>
#include <stack>

// use tha multimap function

using namespace std;

inventory::inventory(int)
{
}

inventory::inventory(const inventory&)
{
	capacity = MAX_INTEGRITY;
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

inventory::~inventory()
{
}
