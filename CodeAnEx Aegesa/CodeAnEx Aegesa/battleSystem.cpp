#include <iostream>
#include "windows.h"
#include "stdlib.h"
#include "battleSystem.h"
#include "Player_Actor.h"
#include <stdlib.h>

using namespace std;

battleSystem::battleSystem()
{
	turnGuage = 0;
	aGuage = 0;
	battleMode(); // battle mode
	
}

void battleSystem::battleMode()
{
	Player_Actor h; 
	
	tGuage(h.dummyPlus,h.getSPD(),h.getFp());

	if (true)
	{
		turnSystem();
	}
	
}

void battleSystem::turnSystem()
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
		case (a): // turn a is always at 0 if its at one or more... CLASH this is why its called TURN A clash
			break;
			// enemy turn check
		case (b):
			break;
			// yor tuarn
		case (c):
			break;
			// TurnA
		case (d):
			break;

		default:
			aGuage = false; // reseting the turn check
			guagek = aGuage;
			break;
		}
		
	} while (battleTime == true);
}

//turn guage
bool battleSystem::tGuage(int spdPlus, int spd, int fp)
{
	tm guage;
	guage.tm_sec = (spd + spdPlus);

	normalOutput("priming for attack....");
	int i = 0;

	if (fp >= i)
	{
		for (i = 0; i < fp; i++)
		{
			guage.tm_sec++;
		}
	}
	else
	{
		*aGuage = true;
		normalOutput("primed..!");
		return aGuage;
	}
}

// normal output
void battleSystem::normalOutput(string ein)
{
	system("Color 0F");
	cout << ein << endl;
	cout << "Press Enter";
	cin.get();
}

// damage output
void battleSystem::damageOutput(string bin)
{
	system("Color 0E");
	cout << bin << endl;
	cout << "Press Enter";
	cin.get();
}

void battleSystem::critDmgOutput(string din)
{
	system("Color 0C");
	cout << din << endl;
	cout << "Press Enter";
	cin.get();
}

// heal output
void battleSystem::healOutput(string hin)
{
	system("Color 0B");
	cout << hin << endl;
	cout << "Press Enter";
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
	cout << "Press Enter";
	cin.get();
}