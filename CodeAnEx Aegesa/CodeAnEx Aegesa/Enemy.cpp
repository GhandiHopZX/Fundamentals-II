#include <iostream>
#include <cstdio>
#include <string>
#include <map>
#include <stack>
#include <malloc.h>
#include "Enemy.h"

using namespace std;

Enemy::Enemy()
{
	elementType();
	goldA = 0;
	expA = 0;
}

Enemy::Enemy(string, elementType, int expAw, int gA, int item)
{
	expA = 0;
	goldA = 0;
}

// todo: free up some memory
void Enemy::enemiesList()
{
	// mobs allowed in the game
	const int m = 100; 
	
#pragma region Enemy_region

	Enemy Ninja("Ninja", elementType::Normal, 50, 100, 5);
	Enemy Goblin("Goblin", elementType::Normal, 23, 43, 4);
	Enemy Rock_Demon("Rock Demon", elementType::Earth, 1000, 0, 3);
	Enemy Tormuloid("Tormuloid", elementType::Air, 60, 0, 6);
	Enemy FireWitch("Fire Witch", elementType::Fire, 90, 230, 2);
	Enemy Entling("Entling", elementType::Bio, 23, 0, 1);
	Enemy MorphVirus("Morph Virus", elementType::Phase, 15, 0, 30);
	Enemy MorphTrojan("Morph Trojan", elementType::Phase, 40, 0, 41);
	Enemy Light_Nimph("Light Nimph", elementType::Light, 32, 45, 17);
	Enemy Dark_Nimph("Dark Nimph", elementType::Dark, 32, 45, 16);
	Enemy Static_Vectrite("Static Vectrite", elementType::Lightning, 35, 0, 10);
	Enemy Crystallina("Crystallina", elementType::Water, 56, 0, 50);

	//lv 1 Bosses 
	Enemy MorphQueen("MorphQueen", elementType::Phase, 160, 400, 42);
#pragma endregion

	// storing index
	Enemy lv1baddies[m] =
	{
		FireWitch,
		Ninja,
		Goblin,
		Rock_Demon,
		Tormuloid,
		Entling,
		MorphVirus,
		MorphTrojan,
		Light_Nimph,
		Dark_Nimph,
		Static_Vectrite,
		Crystallina
	};

	Enemy lv1bosses[m] =
	{
		//bosses
		MorphQueen
	};

	// this will be used for specific stats only
#pragma region BaddieStats

#pragma endregion

	// general brushing of difficulty for this assignment
	lv1baddies->setHp(100);
	lv1baddies->setSp(40);

	//Todo: fix this
	/*enemyList.begin.assign(lv1baddies);
	enemyList.begin.assign(lv1bosses);*/
}