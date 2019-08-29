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
	char choice;
	cout << endl;

	// displaying menu

	cout << "Part Description\t\t Number of Parts in the Bin";

	// user chooses
		
	while (choice != 11)
	{
		switch (choice)
		{
		case '1': 
			break;

		case '2':
			break;

		case '3':
			break;

		case '4':
			break;

		case '5':
			break;

		case '6':
			break;

		case '7':
			break;

		case '8':
			break;

		case '9':
			break;

		case '10':
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

int addParts(BIN[])
{
	return 0;
}

int removeParts(BIN[])
{
	return 0;
}
