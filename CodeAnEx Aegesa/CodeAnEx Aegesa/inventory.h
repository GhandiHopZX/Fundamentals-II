#pragma once
#include <iostream>
#include <string>
#include <cstdio>
#include "inventory.h"
#include "Player_Actor.h"

using namespace std;

class inventory
{
private:

	// inventory
	int* stackArray;
	int capacity; // stack size
	int size;


public:
	// structs  

	// you're going to have to place these into separate classes that inherit inventory.h in order to 
	// make a system for each actor to implement their own stuff needed. 
	// 1 inventory for the main actor
	// and 3 objects being weapon, armor and item for each and every actor

	struct weapon
	{
		string name;
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
		unsigned int goldValue = 0;

		unsigned int wvalue = 0; // node
		unsigned int quantity = 0;
		struct weapon* next; //next item
	};

	struct armor
	{
		string name;
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
		unsigned int goldValue = 0;

		unsigned int avalue = 0; //node
		unsigned int quantity = 0;
		struct armor* next; //next armor
	};

	struct item
	{
		string name;
		unsigned int hpAdd = 0;
		unsigned int spAdd = 0;
		unsigned int fpAdd = 0;
		unsigned int apAdd = 0;
		// no dp plus plz

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
		unsigned int goldValue = 0;

		unsigned int ivalue = 0; // node for items
		unsigned int quantity = 0;
		struct item* node;

		// next item
	};

	//node heads
	weapon* headw;

	armor* heada;

	item* headi;

	unsigned int sum_weapons = 0; // total number of nodes
	unsigned int sum_armors = 0; // total number of nodes
	unsigned int sum_items = 0; // total number of nodes

	// constant variables
	static const int MAX_INTEGRITY = 20;

	// constructor
	inventory();

	inventory(int);

	inventory(const inventory&);

	/*inventory(int, weapon);

	inventory(int, armor);

	inventory(int, item);*/
	// arrays for the player's inventory.

	weapon my_weapons[inventory::MAX_INTEGRITY] =
	{};

	armor my_armors[inventory::MAX_INTEGRITY] =
	{};

	item my_items[inventory::MAX_INTEGRITY] =
	{};


	inventory::weapon ActorWeaponE[1] = {};
	inventory::armor ActorArmorE[1] = {};

	// functions
	void push(int);
	void pop(int&);
	bool isFull() const;
	bool isEmpty() const;

	// append
	void appendNodeItem(item, int);
	void appendNodeWeapon(weapon, int);
	void appendNodeArmor(armor, int);

	// insert
	void insertNodeItem(item, int);
	void insertNodeWeapon(weapon, int);
	void insertNodeArmor(armor, int);

	// delete node
	void deleteNodeItem(item, int);
	void deleteNodeWeapon(weapon, int);
	void deleteNodeArmor(armor, int);

	// displayListo =)
	void displaylistItem() const;
	void displaylistWeapon() const;
	void displaylistArmor() const;

	void PlayerItemInventory(Player_Actor);

	void itemCall(int);

	// battleSystem
	void rewardCall(int);

	void armorCall(int index);

	void weaponCall(int index);

	void addItem(int);

	void remItem(int);

#pragma region All_items
	inventory::item AEGESA_FRAGMENT;
	inventory::item kaider_shard;
	inventory::item greenball_bun;
	inventory::item enchantment_crystal;
	inventory::item music_chord;
	inventory::item static_weave;
	inventory::item marble_eye;
	inventory::item tiny_fingers;
	inventory::item chared_beast_skin;
	inventory::item magical_mane;
	inventory::item masters_cane;
	inventory::item broken_wing;
	inventory::item ripped_coat;
	inventory::item shattered_broach;
#pragma endregion

	inventory::item itemlist[100] =
	{
		AEGESA_FRAGMENT,
		kaider_shard,
		greenball_bun,
		enchantment_crystal,
		music_chord,
		static_weave,
		marble_eye,
		tiny_fingers,
		chared_beast_skin,
		magical_mane,
		masters_cane,
		broken_wing,
		ripped_coat,
		shattered_broach,
	};

	inventory::item allitemList(int integer)
	{
		return itemlist[integer];
	}

#pragma region All_armors
	inventory::armor broad_armor;
	inventory::armor kavelar_gear;
	inventory::armor carbonite_gear;
	inventory::armor crystalline_armor;
	inventory::armor aerolite_gear;
	inventory::armor vandham_armor;
	inventory::armor antiImpact_armor;
	inventory::armor katType_armor;
	inventory::armor grenadier_composite_armor;
	inventory::armor anti_nuclear_armor;
#pragma endregion

	inventory::armor armorlist[100] =
	{
		broad_armor,
		kavelar_gear,
		carbonite_gear,
		crystalline_armor,
		aerolite_gear,
		vandham_armor,
		antiImpact_armor,
		katType_armor,
		grenadier_composite_armor,
		anti_nuclear_armor
	};

	inventory::armor allarmorList(int integer)
	{
		return armorlist[integer];
	}

#pragma region All_weapons
	inventory::weapon brawd_injector;
	inventory::weapon glass_gauntlet;
	inventory::weapon carbonite_knuckle;
	inventory::weapon crystalline_injector;
	inventory::weapon aerolite_gauntlet;
	inventory::weapon vandham_gauntlet;
	inventory::weapon antimatter_injector;
	inventory::weapon shinobi_claws;
	inventory::weapon tacheyon_injector;
	inventory::weapon magic_glove;
	inventory::weapon bomber_injector;
	inventory::weapon titanium_infused_gauntlet;
	inventory::weapon anti_nuclear_injector;
#pragma endregion

	inventory::weapon weaponlist[100] =
	{
	 brawd_injector,
	 glass_gauntlet,
	 carbonite_knuckle,
	 crystalline_injector,
	 aerolite_gauntlet,
	 vandham_gauntlet,
	 antimatter_injector,
	 shinobi_claws,
	 tacheyon_injector,
	 magic_glove,
	 bomber_injector,
	 titanium_infused_gauntlet,
	 anti_nuclear_injector
	};

	inventory::weapon allweaponList(int integer)
	{
		return weaponlist[integer];
	}

	// selections
	void selectlistItem(int, Player_Actor);

	void itemUse(int d, Player_Actor);

	//void armorSell(int d, Player_Actor o);

	

	void selectlistWeapon(int u, Player_Actor);

	// get

	// setters / mutators
	//void setWeapon(Player_Actor o, inventory::weapon weapon, int index);
	//void setArmor(Player_Actor o, inventory::armor gear, int index);

	// shop_time

	// templates

	// Deconstructor
	~inventory();
};