#include <iostream>
#include <string>
#include <list>
#include <vector>
#include "battleSystem.h"
#include "Player_Actor.h"
#include "World.h"

World::World()
{
	mao = 0;
	tse = 0;
	tung = 0;
}

void World::beginningStory()
{
	system("COLOR e4");

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

	cout << "*Wake up....*" << endl;
	cout << "Huhhh..." << endl;

}