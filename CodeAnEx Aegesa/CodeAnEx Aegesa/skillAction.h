#pragma once
#include "battleSystem.h"
#include "Player_Actor.h"
#include "Enemy.h"

using namespace std;

class skillAction
{
private:
	
	// variables
#pragma region other_vars

#pragma endregion

public:
	// This exists because Enemy is not skillAction so ill compare the two in
	// validation when damage is processed...
	enum class elementType
	{
		Water = 0,
		Fire = 1,
		Earth = 2,
		Air = 3,
		Lightning = 4,
		Phase = 5,
		Bio = 6,
		Light = 7,
		Dark = 8,
		Normal = 9
	};
	
	int num;
	string name;
	elementType type;
#pragma region statModifiers
	unsigned int hpAdd = 0;
	unsigned int spAdd = 0;
	unsigned int fpAdd = 0;
	unsigned int apAdd = 0;
	unsigned int dpAdd = 0;

	unsigned int atkAdd = 0;
	unsigned int defAdd = 0;
	unsigned int spdAdd = 0;

	unsigned int dexAdd = 0;
	unsigned int intAdd = 0;
	unsigned int sprAdd = 0;
	unsigned int endAdd = 0;
	unsigned int conAdd = 0;
	unsigned int strAdd = 0;
	unsigned int agiAdd = 0;
#pragma endregion
	
	skillAction();

	skillAction(int);

	skillAction(int num, string name, elementType);

	skillAction skillcall(int);



	//state changes - wip
};

