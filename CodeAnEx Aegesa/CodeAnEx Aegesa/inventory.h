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
	};

	// variables
	static const int MAX_INTEGRITY = 20;
	// constructor
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

	// templates
	
	// Deconstructor
	~inventory();
};
