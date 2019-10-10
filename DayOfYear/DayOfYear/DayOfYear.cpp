// DayOfYear.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "DayOfYear.h"

using namespace std;


int DayOfYear::daysAtEndOfMonth[] = { 31,59,90,120,151,181,212,243,273,304,334,365 };

string DayOfYear::monthName[] = { "January", "February", "March", "April", "May",
"June", "July", "August", "September", "October", "November", "December"};

// dayOfYear Print convert and print day of the year
void ::DayOfYear::print()
{
	int month = 0;
	while (daysAtEndOfMonth[month] < day)
		month = (month + 1) % 12;
	if (month == 0)
	
		cout << "January " << day << endl << endl;
	else
	{
		cout << endl << monthName[month] << " "
			<< 
	}
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
