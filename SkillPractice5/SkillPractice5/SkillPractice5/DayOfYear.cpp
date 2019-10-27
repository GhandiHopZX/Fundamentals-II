// DayOfYear.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "DayOfYear.h"

using namespace std;

int DayOfYear::daysAtEndOfMonth[] = { 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };

string DayOfYear::monthName[] = { "January", "February", "March", "April", "May",
"June", "July", "August", "September", "October", "November", "December" };

DayOfYear::DayOfYear()
{
}

DayOfYear::DayOfYear(string month, int d)
{
	// notas
	//DayOfYear(month, d);

	d = DayOfYear::getDay();

	// min and 
	int min = 0;
	// max days allowed
	int max = 30;
	// Setting the day of the month for the particular month
	// If its a certain day for the month of Jan - Dec

	if (d == 0)
	{
		DayOfYear += 1;
	}
	

	{ // day validations for the months
		if (d <= daysAtEndOfMonth[0])
		{
			month = "January";
			setDay(d);
		}

		if (d <= daysAtEndOfMonth[1])
		{
			month = "February";
			setDay(d);
		}

		if (d <= daysAtEndOfMonth[2])
		{
			month = "March";
			setDay(d);
		}

		if (d <= daysAtEndOfMonth[3])
		{
			month = "April";
			setDay(d);
		}

		if (d <= daysAtEndOfMonth[4])
		{
			month = "May";
			setDay(d);
		}

		if (d <= daysAtEndOfMonth[5])
		{
			month = "June";
			setDay(d);
		}

		if (d <= daysAtEndOfMonth[6])
		{
			month = "July";
			setDay(d);
		}

		if (d <= daysAtEndOfMonth[7])
		{
			month = "August";
			setDay(d);
		}

		if (d <= daysAtEndOfMonth[8])
		{
			month = "September";
			setDay(d);
		}

		if (d <= daysAtEndOfMonth[9])
		{
			month = "October";
			setDay(d);
		}

		if (d <= daysAtEndOfMonth[10])
		{
			month = "November";
			setDay(d);
		}

		if (d <= daysAtEndOfMonth[11])
		{
			month = "December";
			setDay(d);
		}

		if (d == 365)
		{
			DayOfYear::operator++(d);
			//this->day = 1;
			setDay(d);
		}

		if (d == 0)
		{
			DayOfYear::operator++(d);
			setDay(d);

		}

	}
	
	//You store the day in the data structure. 
	//Any time you get->day it recalculates the month/day based on the master day.
	//Shouldn’t need to worry about rolling over a month.
	//You just have to know what value you set/get.. I think you’re overthinking it. 

	//month
	// send in the month 
	//validateDay();
	
#pragma region stuff
	

		//try
		//{
		//	// if the day of the year is outside the last day of the month 
		//// spit out an error

		//// day of the year

		//	d = day; // put at the end of this ?
		//}
		//catch (out_of_range exception)
		//{
		//	throw exception;
		//}
	// if the day goes over the max 
	// number of days in that month

	//if (d > daysAtEndOfMonth[m])
	//{
	//	for (int i = daysAtEndOfMonth[m]; i < d; i++)
	//	{
	//		--d;
	//	}
	//	setDay(d);
	//}

	//// and the inverse
	//if (d <= 0)
	//{
	//	for (int i = 1; i > d; i--)
	//	{
	//		d++;
	//	}
	//	setDay(d);
	//}
#pragma endregion
	
}

// dayOfYear Print convert and print day of the year
void::DayOfYear::print()
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
//

DayOfYear DayOfYear::operator++(int day)
{
	// if day = 0 
	// add 1
	DayOfYear(monthName[h], day)
	int month = 0;

	int h = month;
	day = getDay();
	day++;
	return ;
}

