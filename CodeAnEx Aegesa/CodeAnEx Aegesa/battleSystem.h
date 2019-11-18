#pragma once
#include <string>
#include <list>
#include <vector>
#include <ctime>

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
	int turnGuageNum;
	string* Status = new string; // a new status

	list <string> statusIndex = {};

	// getters/accessors

	// setters/mutators
	
	// functions
	void statTurn(); // recalls all or any stat plus modifier functions for reauthentications when a number of turns are up

	void battleMode();

	bool playerTGuage(int, int spd, int fp);
	bool enemyTGuage(int, int spd, int fp);

	// output types
	void turnSystem(t);

	void healOutput(string);

	void normalOutput(string);

	void damageOutput(string);

	void critDmgOutput(string);

	void multiDamageOutput(string[]);

	// templates
	

};

