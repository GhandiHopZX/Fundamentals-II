#pragma once
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

	// getters/accessors

	// setters/mutators

	// functions
	void turnSystem();

	// templates

};

