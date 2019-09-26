/******************************
   Name
   Date
   File Name template.cpp
   Description
********************************/

// Headers
#include <iostream>
#include <cstdlib> // for rand and srand
#include <string> 
#include <ctime> // for the time function
#include "Die.h"

using namespace std;

// constructor accepts an argument for the number of sides for the die and 
// performs the roll
Die::Die(int numSides)
{
	// get the system time
	unsigned seed = time(0);
	// seeds the random number generator
	srand(seed);
	// set the number of sides
	sides = numSides;
	//perform an initial roll
	roll();
}

void Die::roll()
{
	// constant for the min die value
	const int MIN_VALUE = 1; // min die value
	// get a random value for the die
	value = (rand() % (sides - MIN_VALUE + 1)) + MIN_VALUE;
}

// getSides member function returns the number for this die
int Die::getSides()
{

}

// Global variables

// Function declarations

int main()
{
	//	Your code goes here


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
