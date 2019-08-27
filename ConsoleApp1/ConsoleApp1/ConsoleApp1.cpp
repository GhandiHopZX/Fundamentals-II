/*
// Name: Solomon Pattee
// Date: created as of 8/26/2019
// FileName: ConsoleApp1.cpp
// Description: Page 662 #13 Drink Machine
*/


#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

//global variables
const int NUM_DRINKS = 5;

//declaration for the drink structure

struct Drink
{
	string name;
	double price;
	int num;

};

// Function prototypes
int getChoice(Drink[]);
void transaction(Drink[], int, double&);


int main()
{
	// Menu
	int choice;

	// drink machine earnings
	double earnings = 0;

	// array of drinks in the machine
	Drink machine[NUM_DRINKS] = {
		{"Cola		", 0.75, 20},
		{"Root Beer", 0.75, 20},
		{"Lemon-Lime", 0.75, 20},
		{"Grape Soda", 0.80, 20},
		{"Cream Soda", 0.80, 20}
	};

	// set the floating-point output formatting
	cout << fixed << showpoint << setprecision(2);

	// display the menu and process the user choice 
	// takes in the array of drinks
	choice = getChoice(machine);

	// process the transaction
	while (choice != 5)
	{
		transaction(machine, choice, earnings);
		// get the next choice
		choice = getChoice(machine);

	}

	// display the machine's total earnings
	cout << "Total earnings: $" << earnings << endl;


    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
