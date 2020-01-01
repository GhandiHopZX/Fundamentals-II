#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <chrono>
#include <thread>
#include "Player_Actor.h"
#include "battleSystem.h"
#include "inventory.h"
#include "enemy.h"
#include "World.h"

using namespace std;

World::World()
{
	mao = 0;
	tse = 0;
	tung = 0;

	map maps[5] =
	{
		lostCity[0][0][0],
		darkForest[0][0][0],
		ekana[0][0][0],
		rheTan[0][0][0],
		aegesaShrine[0][0][0]
	};

}

void World::beginningStory()
{
	//system("COLOR e4"); // shop color
	system("COLOR 09");
	system("CLS");

	string nameIn;
	string bioIn;

	// What's Your Name?

	cout << "What's Your Name?: " << endl;
	cin >> nameIn;

	// What's Your Story?
	cout << "What's Your Story?: " << endl;
	cin >> bioIn;
	cout << endl;

	// full party
	Player_Actor Actor1; // Proper instantiation
	Player_Actor Alicia; // 
	Player_Actor Renae; // 
	Player_Actor Iyn; // 

	Actor1.setName(nameIn);
	Actor1.setBio(bioIn);

	//opening setting
	system("COLOR 07");
	cout << "*" + Actor1.getName() + " Wakes Up*" << endl;
	cin.get();
	cout << Actor1.getName() + ": " + "Huhhh..." << endl;
	cin.get();
	cout << Actor1.getName() + ": " + "damn..." << endl;
	cin.get();
	cout << Actor1.getName() + ": " + "Where am I" << endl;
	cin.get();
	cout << Actor1.getName() + ": " + "how.." << endl;
	cin.get();
	cout << Actor1.getName() + ": " + "How did I survive?" << endl;
	cin.get();
	cout << Actor1.getName() + ": " + "Shit... I hope he doesn't find me. Wherever here is.." << endl;
	cin.get();
	cout << Actor1.getName() + ": " + "Huh... Hmmmn.." << endl;
	cin.get();
	cout << Actor1.getName() + ": " + "This opening above me.." << endl;
	cin.get();
	cout << Actor1.getName() + ": " + "It feels.." << endl;
	cin.get();
	cout << Actor1.getName() + ": " + "good..." << endl;
	cin.get();
	cout << Actor1.getName() + ": " + "Weird.." << endl;
	cin.get();
	cout << Actor1.getName() + ": " + "WAIT!" << endl;
	cin.get();

	//end of chapter 0
	chapter1();
}

void World::chapter1()
{
	int i = 0;

	//end of chapter
	chapter2();
}

void World::chapter2()
{

	//end of chapter
	chapter3();
}

void World::chapter3()
{

	//end of chapter
	chapter4();
}

void World::chapter4()
{

	//end of chapter
	chapter5();
}

void World::chapter5()
{

	//end of chapter
	endGame();
}

void World::endGame()
{

	// end of game? =)
	cin.get();
	cout << "Will you dream again?" << endl;
}

//Enemy Encounter call ins
// call the battle system stuff

// celluar world navigation.

void World::navigation(int selectedMap, int x, int y, int z)
{
	// n = north, ne = northeast, nw = northwest, 
	// sw = southwest, s = south, se = southeast
	// w = west, e = east
	// z = floor

	char dir = {};
	cin >> dir;
	switch (dir)
	{
	case 'n':
		
		break;
	case 'ne':

		break;
	case 'nw':

		break;
	case 's':

		break;
	case 'se':

		break;
	case 'sw':

		break;
	case 'w':

		break;
	case 'e':

		break;
	default:
		break;
	}
}

// with a map ;)
