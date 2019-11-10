#pragma once

class inventory
{
private:
	string name;
	string dec;
	
public:

	// variables

	// constructor
	inventory();

	// getters/accessors
	string getItem(string n, string d)
	{
		dec = d;
		name = n;
	};

	// setters/mutators
	string setItemName(string h)
	{
		return h;
	};

	// functions

	// templates

	template <class Item>
	Item item()
	{

	}
	
};
