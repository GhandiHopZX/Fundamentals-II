#pragma once
#include "inventory.h"
#include <iostream>
#include <string>
class inventory
{
private:
	string name;
	string dec;
	int d = 0;

public:

	// variables

	// constructor
	inventory()
	{
		name = ""; dec = "";
	};

	// getters/accessors

	string getItem()
	{
		return name;
	};

	string getDec()
	{
		return dec;
	};

	// setters/mutators
	void setItemName(string h, string d)
	{
		dec = d;
		name = h;
	};

	// functions

	// templates

	template <class Item>
	Item item()
	{

	};
	
};
