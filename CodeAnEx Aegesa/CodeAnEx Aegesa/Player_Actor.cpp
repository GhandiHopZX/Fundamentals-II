#include <iostream>
#include <string>
#include "Player_Actor.h"

Player_Actor::Player_Actor()
{
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
}

// use this to kill the player and when they die GAME OVER
//Player_Actor::~Player_Actor()
//{
//}