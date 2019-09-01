// SkillPractice1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/******************************
   Name: Solomon Pattee
   Date: 8/28/2019
   FileName: SkillPractice1.cpp
   Description: Inventory Management for the Bins
********************************/

// Headers
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

// Global variables
const int NUM_OF_BINS = 10;

struct BIN
{
	string partName;
	int num;
};

// Function declarations

int getBin(BIN[]);

int addParts(BIN add[]);

void removeParts(BIN rem[]);

int main()
{
	// Bin parts
	BIN Bins[NUM_OF_BINS] = {
	{"Valve", 10},
	{"Bearing", 5},
	{"Bushing", 15},
	{"Coupling", 21},
	{"Flange", 7},
	{"Gear", 5},
	{"Gear Housing", 5},
	{"Vacuum Gripper", 25},
	{"Cable", 18},
	{"Rod", 12}
	};

	//Main Menu
	int choice;

	do
	{
		// display the bin list
		system("CLS");
		cout << "Part Description\t\t Number of Parts in the Bin\n" << endl;

		// displaying menu
				

		// all the bins
		choice = getChoice(Bins);

	} while (choice != 11);
	{}

	// system stops 
	system("PAUSE");

	return 0;
}

int getChoice(BIN c[])
{
	// user imput
	int choice;
	cout << endl;

	// Bin list display
	for (int x = 0; x < NUM_OF_BINS; x++)
	{
		cout << (x + 1) << ")" << c[x].partName << "\t\t";
		cout << c[x].num << endl;
	}

	// display the last menu item, which is to leave Bin Warehouse
	cout << (NUM_OF_BINS + 1)
		<< ") Leave Warehouse\n\n";

	// user picks the bin and type
	cout << "Select the part: " << endl;
	cin >> choice;

	// validate the choice 
	while (choice < 1 || choice > 10)
	{
		cout << "Invalid Please Select a Part: ";
		cin >> choice;
	}

	// choice to add or remove
	int choice2;

	// user chooses once the bin is seleced they may add or remove
	cout << "(1) Add \n or \n (2) Remove the part(s)? " << endl;
	
	if (choice2 == 1)
	{
		// adding said part
		addParts(c);
	}
	else if (choice2 == 2)
	{
		// removing said part 
		removeParts(c);
	}
	else {
	// Invalid option

	};

	//Validate choice2
	while (choice2 < 1 || choice2 > 2)
	{

	}

	return choice -1;
}

//int getBin(BIN c[])
//{
//	return 0;
//}

BIN addParts(BIN add[], int choice)
{
	//Bin object
	BIN add;
	// amount integer
	int amount;

	// ask the User how many to add
	cout << "how many to add?" << endl;
	cin >> amount;

	// for loop

	for (int i = 0; i < amount; i++)
	{
		choice += add->num;
	}
	return add[choice];
}

BIN removeParts(BIN rem[], int choice)
{
	//Bin object
	BIN rem;
	// amount integer
	int amount;

	// ask the User how many to add
	cout << "how many to remove?" << endl;
	cin >> amount;

	// for loop

	for (int i = 0; i < amount; i++)
	{
		choice -= rem->num;
	}
	return rem[choice];
}
