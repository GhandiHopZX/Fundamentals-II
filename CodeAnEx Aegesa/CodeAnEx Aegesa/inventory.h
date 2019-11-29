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

	//inventory(int);

	inventory(const inventory &);

	inventory(int, weapon);

	inventory(int, armor);

	inventory(int, item);

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
	
	// Deconstructor
	~inventory();
};
