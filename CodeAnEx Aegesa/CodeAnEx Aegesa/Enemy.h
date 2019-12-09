#pragma once
#include <iostream>
#include <string>
#include <cstdio>
#include "aegesa.h"
#include "battleSystem.h"
#include "inventory.h"

using namespace std;

class Enemy : aegesa
{
private:

	int expA; //exp awarded
	int itemN;
	int goldA; //gold awarded

public:
	// check this for a weakness
	enum class elementType
	{
		Water = 0,
		Fire = 1,
		Earth = 2,
		Air = 3,
		Lightning = 4,
		Phase = 5,
		Bio = 6,
		Light = 7,
		Dark = 8,
		Normal = 9
	};

	// constructor
	Enemy();

	Enemy(string name, elementType, int expA, int gA, int item);

	//Enemy enemiesList(int indexPass); please leave me alone

	Enemy enemyRandEncounter();
	
	Enemy BossCall(int);

	int getItem();

	int getGold();

	int getEXP();

	int getSPDPlus();

	void setItem(int);

	void setGold(int);

	void setEXP(int);

	// list of enemy types and methods
	list <Enemy> enemyList = {};
};
