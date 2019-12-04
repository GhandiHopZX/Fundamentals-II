#include <iostream>
#include <string>
#include <ctime>
#include "Player_Actor.h"
#include "battleSystem.h"

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


void Player_Actor::setWeapon(inventory::weapon weapon, int index)
{
	ActorWeaponE[index] = weapon;
}

void Player_Actor::setArmor(inventory::armor gear, int index)
{
	ActorArmorE[index] = gear;
}

void Player_Actor::battleGuage()
{

}


// armors and weapons?

// use this to kill the player and when they die GAME OVER
Player_Actor::~Player_Actor()
{
}