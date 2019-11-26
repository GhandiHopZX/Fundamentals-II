#include <iostream>
#include <cstdio>
#include <string>
#include <map>
#include <stack>
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


void Enemy::enemiesList()
{
	// mobs allowed in the game
	const int m = 100; 
	Enemy lv1baddies[m];

	Enemy Ninja("Ninja", Enemy::elementType::Water, 50, 1000, 5);
	Enemy Rock_Demon("Rock Demon", Enemy::elementType::Water, 1000, 0, 3);
	Enemy Goblin("Goblin", Enemy::elementType::Normal, 23, 43, 4);
	Enemy Tormuloid("Tormuloid", Enemy::elementType::Air, 60, 0, 6);

#pragma region BaddieStats

#pragma endregion

	// general brushing of difficulty
	lv1baddies->setHp(100);
	lv1baddies->setSp(40);

	enemyList.begin.assign(lv1baddies);
}