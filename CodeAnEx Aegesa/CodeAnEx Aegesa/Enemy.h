#pragma once
#include <iostream>
#include <string>
#include <cstdio>
#include "Player_Actor.h"
#include "battleSystem.h"
#include "inventory.h"
#include "inventory.cpp"

using namespace std;

class Enemy : public Player_Actor
{
private:

	// check this for a weakness 
	enum class elementType 
	{
		Water = 0, Fire = 1, Earth = 2, Air = 3, Lightning = 4, Phase = 5, Bio = 6, Light = 7, Dark = 8
	}; 

	int expA; //exp awarded

	int goldA; //gold awarded

public:
	// constructor
	Enemy();

	Enemy(elementType, int expA, int gA, int item);

	// added enemy types and methods
	list <Enemy> enemyList = {};
};

