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

int getChoice(BIN c[], int userChoice);

int addParts(BIN add[], int userChoice);

int removeParts(BIN rem[], int userChoice);

void binChanger(BIN chg[], int userChoice);

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
	int choice = 0;
	int userChoice = 0;

	do
	{
		// display the bin list
		system("CLS");
		cout << "Part Description\t\t Number of Parts in the Bin\n" << endl;

		// displaying menu binChanger
				

		// all the bins
		choice = getChoice(Bins, userChoice);

	} while (choice != 11);
	{}

	// system stops 
	system("PAUSE");

	return 0;
}

int getChoice(BIN c[], int userChoice)
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
	int choice2 = 0;

	// user chooses once the bin is seleced they may add or remove
	cout << "(1) Add \n or \n (2) Remove the part(s)? " << endl;
	
	if (choice2 == 1)
	{
		// adding said part
		addParts(c, choice);
	}
	else if (choice2 == 2)
	{
		// removing said part 
		removeParts(c, choice);
	}
	else {
	// Invalid option
		cout << "invalid option..." << endl;
	};

	//Validate choice2
	while (choice2 < 1 || choice2 > 2)
	{
		cout << "invalid option..." << endl;
	}

	return choice -1;
}

int addParts(BIN add[], int userChoice)
{
	// amount integer
	int amount;

	// ask the User how many to add
	cout << "how many to add?" << endl;
	cin >> amount;

	//validation

	if (add[amount].num > 30)
	{
		//too many items requirement...
		cout << "Thats too many!" << endl;
		amount = 0;
		return;
	};

	// for loop

	for (int i = 0; i < amount; i++)
	{
		userChoice += add->num;
	}

	return userChoice -1;
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
		cout << "DON'T GO NEGATIVE!!" << endl;
		amount = 0;
		return;
	};

	// for loop

	for (int i = 0; i < amount; i++)
	{
		userChoice -= rem->num;
	}
	
	return userChoice -1;
}

void binChanger(BIN chg[], int userChoice)
{
}

void transaction(BIN m[], int choice, double& earnings)
{
	// the amout of money tendered
	double money;

	// If the bin part is out of stock
	if (m[choice].num == 0)
	{
		cout << "Sorry, this part is out of stock.\n";
		return;
	}

	// get some money from the customer
	cout << "Enter an amount of money: ";
	cin >> money;

	// make sure the customer entered at least enough for the selected drink
	// and no more than $1.00
	while (money < m[choice].num || money > 1.0)
	{
		cout << "Enter at least " << m[choice].num;
		cout << " and not more than 1 dollar.\n";
		cin >> money;
	}

	// process the selection and give back any change that is due
	if (money >= m[choice].num)
	{
		//dispence the drink 
		cout << "\nThump, thump, thump, dung!\n"
			<< "Enjoy your beverage!\n\n";

		cout << "Change calculated: "
			<< (money - m[choice].num) << endl;

		// if change is due, give to user
		if ((money - m[choice].num) > 0)
			cout << "Your change, " << (money - m[choice].num)
			<< " has just dropped into the change dispenser. \n\n";

		// update 
		earnings += m[choice].num;

		// decrease the number of cans of the selected drink
		m[choice].num--;

		// display the number of the cans this drink currently has in the machine
		cout << "There are " << m[choice].num << " drinks of that type left\n";
	}
}