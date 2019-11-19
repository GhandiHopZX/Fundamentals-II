#pragma once
#include "inventory.h"
#include <iostream>
#include <string>

class inventory
{
private:
	
	// inventory
	int* stackArray;
	int capacity; // stack size
	int size;

public:

	// variables
	static const int MAX_INTEGRITY = 20;
	// constructor
	inventory(int);

	inventory(const inventory &);

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
