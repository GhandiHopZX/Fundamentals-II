/******************************
   Name
   Date
   File Name template.cpp
   Description
********************************/

// Headers
#include <iostream>
#include <cstdlib>
#include <string>
#include "Die.h"
using namespace std;

// Global variables

// Function declarations

int main()
{
	//	Your code goes here
	// constants 
	const int NUM_SIDES = 6;
	const int WINNING_TOTAL = 21;

	//variables
	int computerTotal = 0;
	int userTotal = 0;
	string input;

	// create two die objects 
	Die die1(NUM_SIDES);
	Die die2(NUM_SIDES);

	// display the intro
	cout << "Let's play a game of 21 \n";

	// play as long as the user wants to roll the dice, and the user 
	// total does not exceed 21.
	do
	{
		// does the user want to roll the dice?
		cout << "Would you like to roll the dice?\n";
		cout << "Enter Y for yes or N for no: ";
		getline(cin, input);

		if (input == "Y" || input == "y")
		{
			// roll the dice for computer
			die1.roll();
			die2.roll();

			// increment computer's total points 
			computerTotal += die1.getValue() + die2.getValue();

			// roll the dice for the user
			die1.roll();
			die2.roll();

			// increment the user's total point
			userTotal += die1.getValue() + die.getValue();

			// display the user's total point
			cout << "\nYou have " << userTotal << " points\n\n"; 

		}
	} while ((userTotal < WINNING_TOTAL) && (jinput == "Y" || input == "y"));

	// determine if the user's total is greater than zero before displaying the total
	if (userTotal > 0)
	{
		// display the results
		cout << "\n---------------------------------\n";
		cout << "The computer had " << computerTotal << " points.\n";
		cout << "You had " << userTotal << " points.\n";

		// determine the winner
		if (userTotal <= WINNING_TOTAL)
		{
			if (userTotal > computerTotal || computerTotal > WINNING_TOTAL)
			{
				// congratulate the winner!
				cout << "\nCongrats!! You won!!\n\n";
			}
			else
			{
				// the user did not win the game
				cout << "\nBetter luck next time!\n";
			}
		}
		// display game over message
		cout << "--------------------------\n";
		cout << "\nGame Over!\n\n";

	}
	//	Make sure we place the end message on a new line
	cout << endl;

	//	The following is system dependent.  It will only work on Windows
	system("PAUSE");

	/*
	// A non-system dependent method is below
	cout << "Press any key to continue";
	cin.get();
	*/
	return 0;
}
