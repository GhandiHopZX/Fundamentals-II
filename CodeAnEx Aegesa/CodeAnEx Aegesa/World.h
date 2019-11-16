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
	int mao;
	int tse;
	int tung;

public:
	World();
	
	// setters/mutators

	void beginningStory();
	void chapter1();
	void chapter2();
	void chapter3();
	void chapter4();
	void chapter5();

	// getters/accessors

	// other functions
};


