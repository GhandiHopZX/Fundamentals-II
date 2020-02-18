#pragma once
#include "inventory.h"
class ArmorType :
	public inventory
{
protected:


private: 


public:

	//constructor
	ArmorType(); // one


	// getters and setters
	//void setWeapon(Player_Actor o, inventory::weapon weapon, int index);
	//void setArmor(Player_Actor o, inventory::armor gear, int index);
	//void selectlistArmor(int u);


	// templates
	template <class A> A ACAT()
	{
	}

	//deconstructor
	~ArmorType();

};

