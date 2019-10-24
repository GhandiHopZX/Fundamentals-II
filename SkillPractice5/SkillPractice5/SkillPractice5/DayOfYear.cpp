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
	DayOfYear(month, d);

	this->day = d;

	int m = 0;

	// min and 
	int min = 0;
	// max days allowed
	int max = 30;

	//month

		
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
				m = 0;
				setDay(d);
			}

			if (d <= daysAtEndOfMonth[1])
			{
				month = "February";
				m = 1;
				setDay(d);
			}

			if (d <= daysAtEndOfMonth[2])
			{
				month = "March";
				m = 2;
				setDay(d);
			}

			if (d <= daysAtEndOfMonth[3])
			{
				month = "April";
				m = 3;
				setDay(d);
			}

			if (d <= daysAtEndOfMonth[4])
			{
				month = "May";
				m = 4;
				setDay(d);
			}

			if (d <= daysAtEndOfMonth[5])
			{
				month = "June";
				m = 5;
				setDay(d);
			}

			if (d <= daysAtEndOfMonth[6])
			{
				month = "July";
				m = 6;
				setDay(d);
			}

			if (d <= daysAtEndOfMonth[7])
			{
				month = "August";
				m = 7;
				setDay(d);
			}

			if (d <= daysAtEndOfMonth[8])
			{
				month = "September";
				m = 8;
				setDay(d);
			}

			if (d <= daysAtEndOfMonth[9])
			{
				month = "October";
				m = 9;
				setDay(d);
			}

			if (d <= daysAtEndOfMonth[10])
			{
				month = "November";
				m = 10;
				setDay(d);
			}

			if (d <= daysAtEndOfMonth[11])
			{
				month = "December";
				m = 11;
				setDay(d);
			}

			if (day = daysAtEndOfMonth[m])
			{
				m + 1;
				month = monthName[m];
				d++;
				this->day = d;
			}

			if (day < daysAtEndOfMonth[m])
			{
				m - 1;
				month = monthName[m];
				this->day = d--;
			}

			if (day > daysAtEndOfMonth[11])
			{
				m = 0;
				month = monthName[0];
				this->day = 1;
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
