#include <iostream>
#include <stdlib.h>
#include "windows.h"
#include "stdlib.h"
#include "battleSystem.h"
#include "Player_Actor.h"

using namespace std;

battleSystem::battleSystem()
{
	turnGuageNum = 0; // this is if more than one is set, its usually reset
	aGuage = 0;
	battleMode(); // battle mode
}
 
// how many turns is your status eff or plus gonna last???
void battleSystem::statTurn() 
{}

void battleSystem::battleMode()
{
	Player_Actor h; 
	
	playerTGuage(h.dummyPlus, h.getSPD(), h.getFp());

	//enemy database needed..
	//enemyTGuage()
}

void battleSystem::turnSystem(t jumpTurn)
{

	bool guagek;
	guagek = aGuage;
	// a = no turn at the moment, b = enemy turn check, c = yor TUARN check, d = conflict turn for turn A clash
	// infinite turns till its over

	do
	{
		// turn switch checking whose turn it is
	
		switch (guagek) // check system for whose turn it is
		{
			// no turn wait...
		case (a):
			// turn a is always at 0 if its at d which = 4... 
			// CLASH this is why its called TURN A clash
			break;
			
		case (b): 
			// enemy turn or ai turn check
			break;
			
		case (c):
			// yor tuarn
			break;
			
		case (d):
			// TurnA
			break;

		default:
			aGuage = false; // reseting the turn check
			guagek = aGuage;
			break;
		}
		
	} while (battleTime == true);
}

//turn guage
bool battleSystem::playerTGuage(int spdPlus, int spd, int fp)
{
	tm guage;
	guage.tm_sec = 0.00; // prototype timer or max?

	normalOutput("priming for attack....");
	int max = (fp+fp);

	int rate = (spd + spdPlus * (fp / 2));

	if (a)
	{
		while (max >= guage.tm_sec)
		{
			++guage.tm_sec*rate;
		}
	}
	
	// push turn
	int push = 2;

	*aGuage = true;
	turnSystem(static_cast<t>(push));
	normalOutput("primed..!");
	guage.tm_sec = 0.00; // reset
	return aGuage;
}

// this will also be the general ai turn guage since it doesn't really matter.
// if two party members have the same turn then I'll call unity attack the 
// target will already be set since this is a single player game.
bool battleSystem::enemyTGuage(int spdPlus, int spd, int fp)
{
	tm guage;
	guage.tm_sec = 0.00; // prototype timer or max?

	normalOutput("priming for attack....");
	int max = (fp+fp);

	int rate = (spd + spdPlus * (fp / 2));

	if (a)
	{
		while (max >= guage.tm_sec)
		{
			++guage.tm_sec*rate;
		}
	}

	// push turn
	int push = 1;
	
	*aGuage = true;
	turnSystem(static_cast<t>(push));
	normalOutput("primed..!");
	guage.tm_sec = 0.00; // reset
	return aGuage;

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