#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Ship
{
private:
	//variables
	string shipName;
	string year;

public:
	//constructor
	Ship();// default

	Ship(string n, string y);
};

// constructor set
Ship::Ship() {
	shipName = "";
	year = "";
}

Ship::Ship(string n, string y) {
	shipName = n;
	year = y;
}

//mutator
void setName(string n)
{
	shipName = n;
}

void setDate(string y)
{
	year = y;
}

virtual void print()
{
	cout << "Name: " << getName() << endl
		<< "Date: " << getDate() << endl;
}

//accessor
string getName() const
{
	return shipName;
}

string getDate() const
{
	return year;
}