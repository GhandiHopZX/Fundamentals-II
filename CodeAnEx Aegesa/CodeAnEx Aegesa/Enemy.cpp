#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <map>
#include <stack>
#include <stdlib.h>
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

Enemy Enemy::enemyRandEncounter()
{
	// constants
	const int MAX_ERAND = 13;
	const int MAX_GOLD = 1100;
	const int MAX_ITEM = 14;
	const int MAX_STATN = 10;

	const int MIN = 0;
	const int GOLD_MIN = 100;

	string lvl1names[14] =
	{ "Mongrel", "Rancor", "Mandrake", "Jumpsuit Man",
		"Gorgon Eye", "Jackal", "Golem", "Worm", "Pci Eater",
	"Temptest", "Mecha Recon", "Harpy", "Leech", "Gorigami" };

	int enemyRand = (rand() % (MAX_ERAND - MIN + 1)) + MIN; // 0 - 13
	int goldRand = (rand() % (MAX_GOLD - GOLD_MIN + 1)) + GOLD_MIN; // 100 - 1100
	int itemRand = (rand() % (MAX_ITEM - MIN + 1)) + MIN; // 0 - 14
	int statRand = (rand() % (MAX_STATN - MIN + 1)) + MIN; // 0 - 10

	// random ranges

	string enemyName;

	enemyName = lvl1names[enemyRand];

	Enemy Randlvl1(enemyName, elementType::Phase, enemyRand, goldRand, itemRand);

#pragma region stats
	Randlvl1.setHp(100);
	Randlvl1.setSp(16);
	Randlvl1.setAp(statRand);
	Randlvl1.setFp(statRand);
	Randlvl1.setDp(0);

	Randlvl1.setAGI(statRand);
	Randlvl1.setSTR(statRand);
	Randlvl1.setEND(statRand);
	Randlvl1.setCON(statRand);
	Randlvl1.setSPR(statRand);
	Randlvl1.setINT(statRand);
	Randlvl1.setDEX(statRand);

	Randlvl1.setATK(statRand);
	Randlvl1.setSPD(statRand);
	Randlvl1.setDEF(statRand);
#pragma endregion

	return Randlvl1;
}

Enemy Enemy::BossCall(int call)
{
	const int MAX_BOSS = 12;

	// call 0 for tha boss
	//lv 1 Bosses
	Enemy MorphQueen("MorphQueen", elementType::Phase, 160, 400, 2);
	Enemy GiggaRaugght("GiggaRaugght", elementType::Normal, 2000 /*if you manage to beat him*/, 15000, 12);

	Enemy lvl1index[MAX_BOSS] =
	{
		MorphQueen,
		GiggaRaugght
	};

#pragma region MQBossStats
	MorphQueen.setATK(20);
	MorphQueen.setDEF(13);
	MorphQueen.setSPD(10);

	MorphQueen.setSPR(14);
	MorphQueen.setAGI(9);
	MorphQueen.setCON(15);
	MorphQueen.setINT(24);
	MorphQueen.setEND(20);
	MorphQueen.setDEX(10);
	MorphQueen.setSTR(15);

	MorphQueen.setDp(0);
	MorphQueen.setFp(20);
	MorphQueen.setAp(10);
	MorphQueen.setSp(300);
	MorphQueen.setHp(250);
#pragma endregion

#pragma region GRBossStats
	GiggaRaugght.setATK(500);
	GiggaRaugght.setDEF(430);
	GiggaRaugght.setSPD(100);

	GiggaRaugght.setSPR(140);
	GiggaRaugght.setAGI(90);
	GiggaRaugght.setCON(150);
	GiggaRaugght.setINT(240);
	GiggaRaugght.setEND(200);
	GiggaRaugght.setDEX(100);
	GiggaRaugght.setSTR(150);

	GiggaRaugght.setDp(0);
	GiggaRaugght.setFp(200);
	GiggaRaugght.setAp(100);
	GiggaRaugght.setSp(3000);
	GiggaRaugght.setHp(2500);
#pragma endregion

	return lvl1index[call];
}