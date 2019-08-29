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
BIN Bins[NUM_OF_BINS];

struct BIN
{
	string partName;
	int num;
};

// Function declarations

int getBin(BIN[]);

int addParts(BIN[]);

int removeParts(BIN[]);

int main()
{
	// Bin parts
	BIN bin;

	//Main Menu
	int userChoice;

	// display the bin list
	// all the bins
	userChoice = getBin();

	//process the user input
	getChoice();

	system("PAUSE");

	return 0;
}

int getChoice(BIN c[])
{
	// user imput
	int choice;
	cout << endl;

	// displaying menu

	cout << "Part Description\t\t Number of Parts in the Bin\n" << endl;

	for (int x = 0; x < NUM_OF_BINS; x++)
	{
		cout << (x + 1) << ")" << c[x].partName << "\t\t";
		cout << c[x].num << endl;
	}

	// user chooses
		
	while (choice != 11)
	{
		switch (choice)
		{
		case 1: 
			cout << "Valves?" << endl;
			addParts();
			break;

		case 2:
			cout << "Bearings?" << endl;
			cin >> c->num;
			break;

		case 3:
			cout << "Bushings?" << endl;
			cin >> c->num;
			break;

		case 4:
			cout << "Couplings?" << endl;
			cin >> c->num;
			break;

		case 5:
			cout << "Flanges?" << endl;
			
			cin >> c->num;
			break;

		case 6:
			cout << "Gears?" << endl;
			cin >> c->num;
			break;

		case 7:
			cout << "Gear Housings?" << endl;
			cin >> c->num;
			break;

		case 8:
			cout << "Vacuum Gripers?" << endl;
			cin >> c->num;
			break;

		case 9:
			cout << "Cables?" << endl;
			cin >> c->num;
			break;

		case 10:
			cout << "Rods?" << endl;
			cin >> c->num;
			break;

		default:
			break;
		}
	}
}

int getBin(BIN[])
{
	return 0;
}

int addParts(BIN c[])
{
	// ask the User how many to add

	cout << "how many to add" << endl;
	
	return 0;
}

int removeParts(BIN[])
{
	return 0;
}
