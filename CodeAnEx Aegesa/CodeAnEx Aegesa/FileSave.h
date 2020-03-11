#pragma once
// Headers
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <iomanip>
#include <chrono>
#include <ctime>
#include "FileSave.h"

using namespace std;

class FileSave // this is the fileSystem for the game for saving and loading
{
protected:

private:
	
public:

	struct SKILLSET
	{
		int keys[24];
	};
	
	struct PARTY_MEMBER_DATA
	{
		string PLAYER_NAME;
		string BIO;
		SKILLSET SKILLS;
		int STATS[14]; //15 TOTAL
		string CLASS_PROGRESSION_STATE;
	};

	struct FILEDATA
	{
		string PLAYER_NAME;
		string BIO;
		int STATS[14]; // 15 TOTAL
		int GOLD;
		string CLASS_PROGRESSION_STATE;
		SKILLSET SKILLS;
		long PLAY_TIME;
		int CURRENT_PARTY; //NUMBER AND NAMES 
		int STORY_SEG; // INT WILL BE CALLED INTO A METHOD
		int COMPLETED_SEG;
		int LOCATION_XYZ[3];
	};

	PARTY_MEMBER_DATA PMD01[3]; // Find a way to hashify this number
	int INVENTORY_KEYS[49]; // this one too

	// vars

	FileSave();

	~FileSave();

};
