#include "Player_Actor.h"
#include "battleSystem.h"
#include "inventory.h"
#include "enemy.h"
#include "World.h"
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

using namespace std;

World::World()
{
	mao = 0;// int posx = 0;
	tse = 0;// int posy = 0;
	tung = 0;// int posz = 0;

	map maps[5] =
	{
		lostCity[0][0][0],
		darkForest[0][0][0],
		ekana[0][0][0],
		rheTan[0][0][0],
		aegesaShrine[0][0][0]
	};
	
}

// full party GLOBALS
Player_Actor Actor1; // Proper instantiation
Player_Actor Alicia; // 
Player_Actor Renae; // 
Player_Actor Iyn; // 
inventory mainInventory;
int location = 0; // 0 lostCity, 1 darkForest, 2 ekana, 3 rheTan, 4 aegesaShrine


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

	Actor1.setName(nameIn);
	Actor1.setBio(bioIn);

#pragma region Alicia_SetStats
	Alicia.setName("Alicia");
	Alicia.setBio("Lost class 3 Android unit. Locked Away for 10 years, now follows you in your journey for the AType upgrade to save her friend..");
	Alicia.setATK(6);
	Alicia.setSPD(8);
	Alicia.setDEF(4);
	Alicia.setSTR(10);
	Alicia.setDEX(12);
	Alicia.setCON(7);
	Alicia.setEND(5);
	Alicia.setINT(6);

	Alicia.setHp(15);
	Alicia.setSp(155);
	Alicia.setFp(5);
	Alicia.setAp(5);
	Alicia.setDp(0); // always set these defaulted to 0
#pragma endregion

	//opening setting
	system("COLOR 07");
	dialougeAction(Actor1, "Wakes up");
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
	dialouge(Actor1, "I wana see if I can find that light I just saw...");
	dialouge(Actor1, "I wana see if I can find that light I just saw...");
	dialougeAction(Actor1, "Looks up");
	dialouge(Actor1, "No way....");
	dialougeAction(Actor1, "Jolts from the cold now heated air...");
	dialougeAction(Actor1, "Sees the now visible white clad figure.");
	dialougeAction(Alicia, "Figure steps in from the darkness..");

	// menu time
	menu();
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
// with a map ;)

void World::menu()
{
	char choice = {};
	cout << "Please select an option....\n (i) inventory,\n (n) navigation,\n (p) partystatus,\n (d) dataManagement,\n (o) options";
	cin >> choice;
	switch (choice)
	{
	case 'i':
	case 'item':
		mainInventory.PlayerItemInventory();
		break;
	case 'n':
	case 'navi':
		navigation(location, mao, tse, tung);
	default:
		break;
	}
}

void World::dialouge(Player_Actor pn, string in)
{
	cout << pn.getName() + ": " + in << endl;
	cin.get();
}

void World::dialougeAction(Player_Actor pn, string in)
{
	cout << "*" + pn.getName() + " " + in + "*" << endl;
	cin.get();
}

void World::navigation(int selectedMap, int x, int y, int z)
{
	// n = north, ne = northeast, nw = northwest, 
	// sw = southwest, s = south, se = southeast
	// w = west, e = east
	// z = floor
	cout << "Current Location: " << maps[selectedMap].name << endl;
	cout << "AT: " << maps[selectedMap].x << "row\n" << maps[selectedMap].y 
		<< "column\n" << maps[selectedMap].z << "floor" << endl;

	cout << "Where will you go?\n (n)north, (e)east, (w)west, (s)south, \n (ne)northeast, (nw)northwest, (se)southeast, (sw)southwest " << endl;
	char dir = {};
	cin >> dir;
	switch (dir)
	{
	case 'n':
		maps[selectedMap].y + 1;
		break;
	case 'ne':
		maps[selectedMap].y + 1;
		maps[selectedMap].x - 1;
		break;
	case 'nw':
		maps[selectedMap].y + 1;
		maps[selectedMap].x + 1;
		break;
	case 's':
		maps[selectedMap].y - 1;
		break;
	case 'se':
		maps[selectedMap].y - 1;
		maps[selectedMap].x - 1;
		break;
	case 'sw':
		maps[selectedMap].y - 1;
		maps[selectedMap].x + 1;
		break;
	case 'w':
		maps[selectedMap].x + 1;
		break;
	case 'e':
		maps[selectedMap].x - 1;
		break;
	default:
		cout << "not a direction or command" << endl;
		//menu();
		break;
	}

	switch (z)
	{
		z = maps[selectedMap].z;
	default:
		break;
	} 
}
