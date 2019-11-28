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
		int atkAdd;
		int defAdd;
		int spdAdd;

		int dexAdd;
		int intAdd;
		int sprAdd;
		int endAdd;
		int conAdd;
		int strAdd;
		int agiAdd;

		int wvalue; // node
		struct weapon* next; //next item
	};

	struct armor
	{
		string name;
		int atkAdd;
		int defAdd;
		int spdAdd;

		int dexAdd;
		int intAdd;
		int sprAdd;
		int endAdd;
		int conAdd;
		int strAdd;
		int agiAdd;

		int avalue; //node
		struct armor* next; //next armor
	};

	struct item
	{
		string name;
		int hpAdd;
		int spAdd;
		int fpAdd;
		int apAdd;
	    // no dp plus plz

		int atkAdd;
		int defAdd;
		int spdAdd;

		int dexAdd;
		int intAdd;
		int sprAdd;
		int endAdd;
		int conAdd;
		int strAdd;
		int agiAdd;

		int ivalue; // node for items
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

	inventory(weapon);

	inventory(armor);

	inventory(item);

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
