#include <iostream>
#include <string>
#include <ctime>
#include "Player_Actor.h"
#include "battleSystem.h"
#include "inventory.h"

Player_Actor::Player_Actor()
{
	name = "";
	bio = "";
	statmulti = false;

#pragma region Stat_Instantiation

	// base stats
	hp = 10;
	sp = 5;
	ap = 5;
	dp = 0;
	fp = 1;

	// battler stats
	ATK = 5;
	DEF = 5;
	SPD = 5;

	AGI = 5;
	DEX = 5;
	END = 5;
	INT = 5;
	SPR = 5;
	STR = 5;
	CON = 5;

	// exp

	EXP = 0;
#pragma endregion
}

inventory inv;

void Player_Actor::battleGuage()
{
}

Player_Actor::statusEff Player_Actor::getStatus(int index)
{
	// a criterion is checked here
	// and used to see what statuses are present in said
	// player status then are passed
	// into the statusEFF index then the index is passed into
	// gameSystem...
	// this is where the statuses are taken

	statusEff me[20] = {};
	for (int i = 0; i < 20; i++)
	{
		me[i] = allEffGet[i];
	}
	// beta test
	string beta = "test";
	// statusEff;
	return me[index];
}
// armors and weapons?

// use this to kill the player and when they die GAME OVER
Player_Actor::~Player_Actor()
{
}