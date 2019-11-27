#pragma once
#include <iostream>
#include <string>
#include <cstdio>
#include "Player_Actor.h"
#include "battleSystem.h"
#include "inventory.h"

using namespace std;

class Enemy : public Player_Actor
{
private:

	int expA; //exp awarded

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

	Enemy enemiesList(int indexPass);

	// list of enemy types and methods
	list <Enemy> enemyList = {};
};

