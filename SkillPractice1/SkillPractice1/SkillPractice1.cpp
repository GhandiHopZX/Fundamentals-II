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

int getChoice(BIN c[]);

int addParts(BIN add[], int userChoice);

int removeParts(BIN rem[], int userChoice);

void binChanger(BIN chg[], int userChoice);

int main()
{
	// Bin parts
	BIN Bins[NUM_OF_BINS] = {
	{"	Valve			", 10},
	{"	Bearing			", 5},
	{"	Bushing			", 15},
	{"	Coupling		", 21},
	{"	Flange			", 7},
	{"	Gear			", 5},
	{"	Gear Housing		", 5},
	{"	Vacuum Gripper		", 25},
	{"	Cable			", 18},
	{"	Rod			", 12}
	};

	// formatting
	cout << fixed << showpoint << setprecision(2);
	
	//Main Menu
	int userChoice;

	// display the bin list
	cout << "Part Description\t\t Number of Parts in the Bin" << endl;

	userChoice = getChoice(Bins);

	while (userChoice != 11)
	{
		// display the bin list
		cout << "Part Description\t\t Number of Parts in the Bin" << endl;

		// displaying menu binChanger
		binChanger(Bins, userChoice);

		// all the bins
		userChoice = getChoice(Bins);

	};

	// system stops 
	system("PAUSE");

	return 0;
}

int getChoice(BIN c[])
{
	int userChoice;
	// user imput
	cout << endl;

	// Bin list display
	for (int x = 0; x < NUM_OF_BINS; x++)
	{
		cout << (x + 1) << ")" << c[x].partName << "\t";
		cout << c[x].num << endl;
	}

	// display the last menu item, which is to leave Bin Warehouse
	cout << (NUM_OF_BINS + 1)
		<< ") Leave Warehouse\n\n";

	// user picks the bin and type
	cout << "Select the part: ";
	cin >> userChoice;

	//Validate choice2
	while (userChoice < 1 || userChoice > 11)
	{
		cout << "invalid option..." << endl;
		cout << "Choose part: ";
		cin >> userChoice;
	}

	// choice to add or remove
	char choice2;

	// user chooses once the bin is seleced they may add or remove
	cout << "(1) Add \n or \n (2) Remove the part(s)? " << endl;

	cin >> choice2;
	
	if (choice2 == '1')
	{
		// adding said part
		addParts(c, userChoice);
	}
	else if (choice2 == '2')
	{
		// removing said part 
		removeParts(c, userChoice);
	}
	else 
	{
		// Invalid option
		cout << "invalid option..." << endl;
		cin >> choice2;
	};

	//Validate choice2
	while (choice2 < '1' || choice2 > '2')
	{
		cout << "invalid option..." << endl;
		cout << "Choose to add (1) or remove (2): ";
		cin >> choice2;
	}

	return userChoice -1;
}

int addParts(BIN add[], int userChoice)
{
	// amount integer
	int amount;

	// ask the User how many to add
	cout << "how many to add?" << endl;
	cin >> amount;

	//validation

	if (add[userChoice].num > 30)
	{
		//too many items requirement...
		cout << "Thats too many!" << endl;
		amount = 0;
	};
	
	add[userChoice].num += amount;

	return userChoice;
}

int removeParts(BIN rem[], int userChoice)
{
	// amount integer
	int amount;

	// ask the User how many to add
	cout << "how many to remove?" << endl;
	cin >> amount;

	//validation

	if (rem[amount].num < 0)
	{
		//too many items requirement...
		cout << "There aren't any to get rid of.." << endl;
		amount = 0;
		return amount;
	};

	userChoice -= rem[userChoice].num;
	rem[userChoice].num--;
	
	return userChoice;
}

void binChanger(BIN chg[], int userChoice)
{


}