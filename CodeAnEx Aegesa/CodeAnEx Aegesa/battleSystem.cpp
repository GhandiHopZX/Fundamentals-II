#include "battleSystem.h"
#include <iostream>

using namespace std;

battleSystem::battleSystem()
{

}

void battleSystem::turnSystem()
{
	bool guagek;
	guagek = aGuage;
	a == 0; // a = no turn at the moment, b = enemy turn check, c = yor TUARN check, d = conflict turn for turn A clash
	int dummy = 10;
	// infinite turns
	for (int i = 0; i < dummy; i++)
	{
		// turn switch checking whose turn it is
	
		switch (a) // check system for whose turn it is
		{
			// no turn wait...
		case (a): // turn a is always at 0 if its at one or more... CLASH this is why its called TURN A clash
			break;
			// enemy turn check
		case (b):
			break;

		case (c):
			break;

		case (d):
			break;

		default:
			aGuage = false; // reseting the turn check
			guagek = aGuage;
			break;
		}
		

	}
}
