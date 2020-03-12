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

	string savePath;
	string saveName;
	
public:

	// vars
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
	int INVENTORY_KEYS[50]{}; // this one too

	struct FileLoad
	{
		SKILLSET l1;
		PARTY_MEMBER_DATA l2[3];
		FILEDATA l3;
		int INVENTORY_KEYS_l4[49];
	};

	FileLoad nuwData; // one for fstream

	//functions

	FileSave();

	void saveFile(vector<FileSave::SKILLSET> &SkillSet, vector<FileSave::PARTY_MEMBER_DATA> PMD[], vector<FileSave::FILEDATA> &FileData)
	{
		fstream JavaFile((savePath + '/' + saveName + ".dat").c_str(), ios::out, ios_base::trunc);
	};

	void setSavePath(string m)
	{
		savePath = m;
	};

	void setFileName(string m)
	{
		saveName = m;
	};

	FileLoad loadFile() 
	{
		// fstream stuff here...
		fstream JavaFile((savePath + '/' + saveName + ".dat").c_str(), ios::in, ios_base::trunc);

		// end here
		return nuwData;
	};

	string getSavePath()
	{
		return savePath;
	};

	string getSaveName()
	{
		return saveName;
	};

	~FileSave();

};
