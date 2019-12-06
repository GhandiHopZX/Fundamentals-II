#pragma once
#include <iostream>
#include <string>
#include <cstdio>
#include "Player_Actor.h"
#include "inventory.h"

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

	// arrays for the player's inventory.
	weapon my_weapons[MAX_INTEGRITY] =
	{};

	armor my_armors[MAX_INTEGRITY] =
	{};

	item my_items[MAX_INTEGRITY] =
	{};

	// constructor
	inventory();

	inventory(int);

	inventory(const inventory&);

	/*inventory(int, weapon);

	inventory(int, armor);

	inventory(int, item);*/

	// getters/accessors

	// setters/mutators

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

	inventory PlayerItemInventory();

	void itemCall();

	// battleSystem
	inventory::item rewardCall(int);

	void addItem();

	void remItem();

	inventory::item allitemList(int integer)
	{
		const int MAX_ITEMS = 100;
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

		inventory::item itemlist[MAX_ITEMS] =
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

		return itemlist[integer];
	}

	inventory::armor allarmorList(int integer)
	{
		const int MAX_ARMORS = 100;
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

		inventory::armor armorlist[MAX_ARMORS] =
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

		return armorlist[integer];
	}

	inventory::weapon allweaponList(int integer)
	{
		const int MAX_WEAPONS = 100;

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

		inventory::weapon weaponlist[MAX_WEAPONS] =
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

		return weaponlist[integer];
	}

	// selections
	inventory::item selectlistItem(int);

	inventory::armor selectlistArmor(int u);

	inventory::weapon selectlistWeapon(int u);

	// shop_time

	// templates

	// Deconstructor
	~inventory();
};
