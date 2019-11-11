#pragma once
#include <iostream>
#include <string>
using namespace std;
class Item
{
private:
	//items
	string name;
	string dec;
	int d = 0;

public:
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

