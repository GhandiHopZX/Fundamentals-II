#pragma once
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include "battleSystem.h"

class World // this is the mainline story for Code AnEx AEGESA
{
	// this game has up to 5 chapters...
	// I know shocking!!!
	// but its a prequel to a story I haven't fully written yet.
	// sorry for the bad storytelling if that's your thing....

private:
	// Hub worlds that have cellular navigation 
	// for now we only have ch 0 - 5 to cover the lost city arc
	// and that's it for now. 
	// this is the lost city player pos and map
	struct map
	{
		int x = 0;
		int y = 0;
		int z = 0;
		string name;
	};

	map lostCity[4][11][11]; 
	map darkForest[2][11][11];
	map ekana[1][11][11];
	map rheTan[1][11][11];
	map aegesaShrine[5][11][11];

	int mao = 0;
	int tse = 0;
	int tung = 0;

public:
	// maps

	map maps[5] = {	};
	
	World();

	// setters/mutators

	void beginningStory(); //Awaken Marko(or Player one)
	void chapter1(); //RE-BIRTH
	void chapter2(); //Shattered and Hollow
	void chapter3(); //Green Gold
	void chapter4(); //Renae's Secret/Lost Civilization
	void chapter5(); //Alicia's Verdict

	void endGame(); // game end

	void navigation(int selectedMap, int m, int c, int e);

	// getters/accessors

	// other functions
};
