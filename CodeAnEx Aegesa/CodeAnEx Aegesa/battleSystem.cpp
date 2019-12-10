#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <chrono>
#include <thread>
#include "windows.h"
#include "stdlib.h"
#include "inventory.h"
#include "battleSystem.h"
#include "Player_Actor.h"
#include "Enemy.h"
#include "World.h" // for encounters
#include "skillAction.h"

using namespace std;

//todo: callin enemy encouter data

void battleSystem::battleMode()

{
	Player_Actor he; //call vars
	Enemy en; // call vars
	skillAction skilz;
	// this is where the insanity goes till hp drops for all members of either
	// troop size
	cout << "============ E N G A D G E ============" << endl;

	//player set
	playerTGuage(he.dummyPlus, he.getSPD(), he.getFp());

	//enemy set
	enemyTGuage(en.getSPDPlus(), en.getSPD(), en.getFp());
}

battleSystem::battleSystem()
{
	Player_Actor he; //call vars
	Enemy en; // call vars
	skillAction skilz;

	turnGuageNum = 0; // this is if more than one is set, its usually reset
	aGuage = 0;
	battleMode(); // battle mode
}

void battleSystem::enemyTroop()
{
	Player_Actor he; //call vars
	Enemy en; // call vars
	skillAction skilz;
}

void battleSystem::allyTroop()
{
	Player_Actor he; //call vars
	Enemy en; // call vars
	skillAction skilz;
}

void battleSystem::targetEnemy()
{
	Player_Actor he; //call vars
	Enemy en; // call vars
	skillAction skilz;
}

void battleSystem::aiTargeting()
{
	Player_Actor he; //call vars
	Enemy en; // call vars
	skillAction skilz;
}

void battleSystem::turn()
{
	Player_Actor he; //call vars
	Enemy en; // call vars
	inventory inv;

	normalOutput(he.name + " turn...");
	normalOutput("Attack(a),\n Defend(d),\n Hack(h),\n Skills(s),\n Inventory(i) ");
	// initialized choice char
	char c = { 'n' };

	if (c != 'n')
	{
		switch (c)
		{
		case 'i': // inventory
			//your itemCall for listup...
			inv.PlayerItemInventory();
			break;
		case 's': // skills
			hack();
			break;
		case 'h': // hack
			skill();
			break;
		case 'd': // defend
			defend();
			break;
		case 'a': // attack
			attack();
			break;
		default:
			normalOutput("Try using the single letter prompts..");
			turn();
			break;
		}
	}
}

// use a linked list?
void aegesa::setStatus(aegesa::statusEff statusName[])
{
	Player_Actor he; //call vars
	Enemy en; // call vars
	skillAction skilz;
	// this is where the statuses go in

	// this is where the game and
	// battle system look for the
	// setStatuses used for said Actor
	// and the status effect is used

	//const int N = const_cast<const int&>(o);

	for (int i = 0; i < 20; i++)
	{
		My_Statuses[i] = statusName[i];
	}
}

// how many turns is your status eff or plus gonna last???
void battleSystem::statTurn(aegesa::statusEff call)
{
	Player_Actor he; //call vars
	Enemy en; // call vars
	skillAction skilz;

	int maxNumber = 20;
	int max_Statuses = maxNumber;
	// statusCall <- here call an integer for these status effects
	// for this for loop use the interator to set how many turns for each individual status
	// and then count them down for each turn in another iterator.
	for (int i = 0; i < maxNumber; i++)
	{
		//put the statuses in here
	}
}

void battleSystem::turnSystem(int turn)
{
	Player_Actor he; //call vars
	Enemy en; // call vars
	skillAction skilz;

	bool guagek;
	guagek = aGuage;
	int turnBack;
	// a = no turn at the moment or turnA clash, b = enemy turn check, c = yor TUARN check, d = conflict turn for turn A clash
	// infinite turns till its over
	do
	{
		// turn switch checking whose turn it is
		switch (turn)
		{
		case (a):
			// turn a is always at 0 if its at d which = 4...
			// CLASH this is why its called TURN A clash

			break;

		case (b):
			// enemy turn or ai turn check
			//statTurn(statusCall(he.getStatus()));// call this whenever you get a SPECIFIC stat you want that is numbered
			break;

		case (c):
			// yor tuarn
			//statTurn(20); // one turn = one and done
			break;

		case (d):
			// TurnA
			//statTurn(20); // one turn = one and done

			break;

		case (e):
			// Turncheck
			turnBack = -4; // if nobodys turn

			break;

		case (f):
			// Turncheck
			turnBack = -5; // if nobodys turn
			break;

		default:
			aGuage = false; // reseting the turn check
			guagek = aGuage;
			break;
		}
	} while (battleTime == true);
}

int battleSystem::statusCall(int ti)
{

	return ti;
};

//turn guage
bool battleSystem::playerTGuage(int spdPlus, int spd, int fp)
{

	tm guage;
	guage.tm_sec = 0; // prototype timer or max?

	normalOutput("priming for attack....");
	long maxim = (fp + fp);

	long rate = (spd + spdPlus * (fp / 2));

	long dura = maxim;

	long add = 0;

	if (a)
	{
		auto start = std::chrono::high_resolution_clock::now;// start
		std::this_thread::sleep_for(static_cast<chrono::seconds>(dura));
		auto end = std::chrono::high_resolution_clock::now();

		add = 0;
		// push turn
		int push = 2;

		*aGuage = true;
		turnSystem(static_cast<t>(push));
		normalOutput("primed..!");
		guage.tm_sec = 0; // reset
		return aGuage;
	}
	else if (c) //player turn
	{
		normalOutput("Attacking...");
	}
	else
	{
		normalOutput("Guage Inactive...");
	}
	return false;
}

// this will also be the general ai turn guage since it doesn't really matter.
// if two party members have the same turn then I'll call unity attack the
// target will already be set since this is a single player game.
bool battleSystem::enemyTGuage(int spdPlus, int spd, int fp)
{
	tm guage;
	guage.tm_sec = 0; // prototype timer or max?

	normalOutput("Other priming attack....");

	long maxim = (fp + fp);

	long rate = (spd + spdPlus * (fp / 2));

	long dura = maxim;

	long add = 0;

	if (a)
	{
		auto start = std::chrono::high_resolution_clock::now;// start
		std::this_thread::sleep_for(static_cast<chrono::seconds>(dura));
		auto end = std::chrono::high_resolution_clock::now();

		add = 0;
		// push turn
		int push = 1;

		*aGuage = true;
		turnSystem(static_cast<t>(push));
		normalOutput("primed..!");
		guage.tm_sec = 0; // reset
		return aGuage;
	}

	else if (b) // enemy turn or ai
	{
		normalOutput("enemy guage inactive..");
	}
	else
	{
	}
	return false;
}

// normal output
void battleSystem::normalOutput(string ein)
{
	system("Color 0F");
	cout << ein << endl;
	cout << "Press Enter";
	system("COLOR 07");
	cin.get();
}

// damage output
void battleSystem::damageOutput(string bin)
{
	system("Color 0E");
	cout << bin << endl;
	cout << "Press Enter";
	system("COLOR 07");
	cin.get();
}

void battleSystem::critDmgOutput(string din)
{
	system("Color 0C");
	cout << din << endl;
	cout << "Press Enter";
	system("COLOR 07");
	cin.get();
}

// heal output
void battleSystem::healOutput(string hin)
{
	system("Color 0B");
	cout << hin << endl;
	cout << "Press Enter";
	system("COLOR 07");
	cin.get();
}

// an experiment?
void battleSystem::multiDamageOutput(string n[])
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	// you can loop k higher to see more color choices
	for (int k = 1; k < 255; k++)
	{
		// pick the colorattribute k you want
		SetConsoleTextAttribute(hConsole, k);
		cout << k << n[k] << endl;
	}
	system("COLOR 07");
	cout << "Press Enter";
	cin.get();
}

// battle_system calls
void battleSystem::attack() {
}
void battleSystem::defend() {}
void battleSystem::skill()
{
	/*he.statPlus('h', skilz.skillcall->hpAdd);
	he.statPlus('s', skilz.skillcall->spAdd);
	he.statPlus('d', skilz.skillcall->defAdd);*/
}

void battleSystem::hack() {}

void battleSystem::rewardOutput()
{
	Player_Actor he; //call vars
	Enemy en; // call vars
	inventory inv; // call tha listos

	// iterate all the enemies that were on
	// the battle field and run this at least
	// once for all of their rewards.
	// also store them in the player inventoru
	int rew = en.getItem();
	inv.rewardCall(rew);
	normalOutput(" Obtained...");

	//inv.my_items(inv.allitemList(en.getItem), en.getItem);
}