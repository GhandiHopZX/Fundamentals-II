#include <iostream>
#include <string>
#include "Player_Actor.h"


Player_Actor::Player_Actor()
{
	name = "";
	bio = "";

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


void Player_Actor::setStatus(string statusName)
{
	// this is where the statuses go in	
	

	// this is where the game and 
	// battle system look for the 
	// setStatuses used for said Actor
	// and the status effect is used

	/*int o = 0;
	const int N = const_cast<const int&>(o);

	o = statusName->size;

	for (int i = 0; i < o; i++)
	{
		statusEff[i] += statusName[o];
	}*/

}


void Player_Actor::getStatus()
{
	// a criterion is checked here 
	// and used to see what statuses are present in said 
	// player status then are passed 
	// into the statusEFF index then the index is passed into 
	// gameSystem...
	// this is where the statuses are taken

	

	// beta test
	string beta = "test";
	// statusEff;
}



// use this to kill the player and when they die GAME OVER
Player_Actor::~Player_Actor()
{
}