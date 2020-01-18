#pragma once
#include <iostream>
#include <string>
#include <cstdio>
#include "aegesa.h"
#include "battleSystem.h"
#include "inventory.h"

using namespace std;

class Enemy : public aegesa
{
private:

	int expA; // exp awarded
	int itemN; // item awarded
	int goldA; // gold awarded
	bool leader; // lead
	int party_num;
	string title;

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

	Enemy getParty();

	int getParty_num()
	{
		return party_num;
	}

	void setItem(int);

	void setGold(int);

	void setEXP(int);

	void setParty(Enemy currentPa, int pos);

	void setParty_num(int n)
	{
		party_num = n;
	}

	Enemy callPartyMember(int pos);

	string getTitle();

	void setTitle(string n);

	// list of enemy types and methods
	list <Enemy> enemyList = {};

	
};
