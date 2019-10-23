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
	// month int
	int m = 0;
	m = (m + 1) % 12;

	this->day = d;

	// min and max days allowed
	int min = 0;
	int max = 30;

	//month
	month = monthName[m];
	
	if (daysAtEndOfMonth[m] < day || day <= 0) 
	{
		cout << "Cannot go outside the number of days.";
		cout << "Terminating..." << endl;
	}

	if (day = daysAtEndOfMonth[m])
	{
		d = 0;
		monthName[m+1];
		d++;
		daysAtEndOfMonth[m + 1];
		this->day = d;
	}

	if (day < daysAtEndOfMonth[m])
	{
		monthName[m-1];
		daysAtEndOfMonth[m - 1];
		this->day = d--;
	}
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

	// Setting the day of the month for the particular month
	// If its a certain day for the month of Jan - Dec

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
	}
	
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
