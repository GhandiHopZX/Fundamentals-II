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
#include "battleSystem.h"
#include "Player_Actor.h"
#include "inventory.h"
#include "enemy.h"
#include "World.h"

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
		
	Player_Actor().name = nameIn;
	Player_Actor().bio = bioIn;

	//opening setting
	system("COLOR 07");
	cout << "*Wake up....*" << endl;
	cout << "Huhhh..." << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
}
