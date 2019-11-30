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

		unsigned int wvalue = 0; // node
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

		unsigned int avalue = 0; //node
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

		unsigned int ivalue = 0; // node for items
		struct item* node; // next item
	};

	//node heads
	weapon* headw;

	armor* heada;

	item* headi;

	// variables
	static const int MAX_INTEGRITY = 20;
	// constructor
	inventory();

	inventory(int);

	inventory(const inventory &);

	inventory(int, weapon);

	inventory(int, armor);

	inventory(int, item);

	// all item calls in the game
	int itemListCall(int);
	int armorListCall(int);
	int weaponListCall(int);

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

	// templates

	// shop_time

	template <class T>
	T allitemList(T integer)
	{
		const int MAX_ITEMS = 100;
#pragma region All_items
		item AEGESA_FRAGMENT;
		item kaider_shard;
		item greenball_bun;
		item enchantment_crystal;
		item music_chord;
		item static_weave;
		item marble_eye;
		item tiny_fingers;
		item chared_beast_skin;
		item magical_mane;
		item masters_cane;
		item broken_wing;
		item ripped_coat;
		item shattered_broach;
#pragma endregion

		item itemlist[MAX_ITEMS] =
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

	template <class T>
	T allarmorList(T integer)
	{
		const int MAX_ARMORS = 100;
#pragma region All_items
		armor brawd_armor;
		armor kavelar_gear;
		armor carbonite_gear;
		armor crystalline_armor;
		armor aerolite_gear;
		armor vandham_armor;
		armor antiImpact_armor;
		armor katType_armor;
		armor grenadier_composite_armor;
		armor anti_nuclear_armor;
#pragma endregion

		armor armorlist[MAX_ARMORS] =
		{
			brawd_armor,
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
	
	template <class T>
	T allweaponList(T integer)
	{
		const int MAX_WEAPONS = 100;

#pragma region All_items
		weapon brawd_injector;
		weapon glass_gauntlet;
		weapon carbonite_knuckle;
		weapon crystalline_injector;
		weapon aerolite_gauntlet;
		weapon vandham_gauntlet;
		weapon antimatter_injector;
		weapon shinobi_claws;
		weapon tacheyon_injector;
		weapon magic_glove;
		weapon bomber_injector;
		weapon titanium_infused_gauntlet;
		weapon anti_nuclear_injector;
#pragma endregion

		weapon weaponlist[MAX_WEAPONS] =
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
	
	// Deconstructor
	~inventory();
};
