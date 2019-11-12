#include <iostream>
#include <string>
#include "Player_Actor.h"

Player_Actor::Player_Actor()
{
#pragma region Stat_Instantiation

	// base stats
	hp = 10;
	sp = 5;
	ap = 5;
	dp = 0;
	fp = 0;

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

string Player_Actor::getStatus()
{
	// a criterion is checked here and used to see what statuses are present in said 
	// player status then are passed into the statusEFF index then the index is passed into 
	// gameSystem...
	// this is where the statuses are taken

	return string();
}

void Player_Actor::setStatus()
{
	// this is where the game and 
	// battle system look for the 
	// setStatuses used for said Actor

}

// use this to kill the player and when they die GAME OVER
//Player_Actor::~Player_Actor()
//{
//}