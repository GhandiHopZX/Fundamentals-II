#pragma once
#include <string>
#include <list>
#include <vector>

using namespace std;

class battleSystem
{
private:

	// variables
	bool battleTime; // if its time to fight
	bool* aGuage;
	enum t 
	{
		a , b , c, d
	}; //turn number

public:
	
	// constructor
	battleSystem();

	// variables
	int turnGuage;
	string* Status = new string; // a new status

	list <string> statusIndex = {};

	// getters/accessors

	// setters/mutators

	// functions
	void turnSystem();

	// templates
	

};

