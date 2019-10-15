// DayOfYear.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "DayOfYear.h"

using namespace std;


int DayOfYear::daysAtEndOfMonth[] = { 31,59,90,120,151,181,212,243,273,304,334,365 };

string DayOfYear::monthName[] = { "January", "February", "March", "April", "May",
"June", "July", "August", "September", "October", "November", "December"};

DayOfYear::DayOfYear()
{

}

DayOfYear::DayOfYear(string month, int day[30])
{ 
	// if the day of the year is outside the range of the days of the month given 
	if (month < day[])
	{

	}
}

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
			<< day - daysAtEndOfMonth[month - 1] 
			<< endl << endl;
	}
}
