#pragma once
#include <string>
#include <list>
#include <vector>
#include <ctime>
#include "aegesa.h"

using namespace std;

class battleSystem
{
private:

	// variables
	bool battleTime; // if its time to fight
	bool* aGuage;

	enum t
	{
		a = 0, b = 1, c = 2, d = 3, e = 4, f = 5
	}; //turn number

public:

	// constructor
	battleSystem();

	// variables
	int turnGuageNum;

	// getters/accessors
	

	aegesa::statusEff inBattleStatusesE[20]{
	};
	// setters/mutators

	void enemyTroop();
	void allyTroop();

	// functions

	void targetEnemy();
	void aiTargeting();

	// the core functions of what the player can do when the player can do
	void turn();

	// recalls all or any stat plus modifier
	//functions for reauthentications when a number of turns are up

	void battleMode();

	int statusCall(int ti);

	bool playerTGuage(int, int spd, int fp);

	bool enemyTGuage(int, int spd, int fp);

	// output types

	void statTurn(aegesa::statusEff maxNumber);

	void turnSystem(int);

	void healOutput(string);

	void normalOutput(string);

	void damageOutput(string);

	void critDmgOutput(string);

	void multiDamageOutput(string[]);

	void attack();

	void defend();

	void skill();

	void hack();

	void rewardOutput();

	// templates
};
