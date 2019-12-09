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
}

void World::beginningStory()
{
	system("COLOR e4"); // shop color
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

	Player_Actor().getName() = nameIn;
	Player_Actor().getBio() = bioIn;

	//opening setting
	system("COLOR 07");
	cout << "*You Wake Up*" << endl;
	cout << "Huhhh..." << endl;
	cout << "e" << endl;
	cout << "g" << endl;
	cout << "h" << endl;
	cout << "h" << endl;
	cout << "sf" << endl;
	cout << "sdf" << endl;
	cout << "sgrg" << endl;
	cout << "sgg" << endl;
}

void World::chapter1()
{
	int i = 0;
}

void World::chapter2()
{
}

void World::chapter3()
{
}

void World::chapter4()
{
}

void World::chapter5()
{
}

//Enemy Encounter call ins
// call the battle system stuff