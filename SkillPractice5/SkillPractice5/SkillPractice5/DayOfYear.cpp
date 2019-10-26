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

	int m = 0;

	// min and 
	int min = 0;
	// max days allowed
	int max = 30;
	
	//You store the day in the data structure. 
	//Any time you get->day it recalculates the month/day based on the master day.
	//Shouldn’t need to worry about rolling over a month.
	//You just have to know what value you set/get.. I think you’re overthinking it. 

	//month
	// send in the month 
	validateMonth();
	
#pragma region stuff
	//{ // day validations for the months
	//	if (d <= daysAtEndOfMonth[0])
	//	{
	//		month = "January";
	//		m = 0;
	//		setMonth(m);
	//		setDay(d);
	//	}

	//	if (d <= daysAtEndOfMonth[1])
	//	{
	//		month = "February";
	//		
	//		m = 1;
	//		setMonth(m);
	//		setDay(d);
	//	}

	//	if (d <= daysAtEndOfMonth[2])
	//	{
	//		month = "March";
	//		m = 2;
	//		setMonth(m);
	//		setDay(d);
	//	}

	//	if (d <= daysAtEndOfMonth[3])
	//	{
	//		month = "April";
	//		m = 3;
	//		setMonth(m);
	//		setDay(d);
	//	}

	//	if (d <= daysAtEndOfMonth[4])
	//	{
	//		month = "May";
	//		m = 4;
	//		setMonth(m);
	//		setDay(d);
	//	}

	//	if (d <= daysAtEndOfMonth[5])
	//	{
	//		month = "June";
	//		m = 5;
	//		setMonth(m);
	//		setDay(d);
	//	}

	//	if (d <= daysAtEndOfMonth[6])
	//	{
	//		month = "July";
	//		m = 6;
	//		setMonth(m);
	//		setDay(d);
	//	}

	//	if (d <= daysAtEndOfMonth[7])
	//	{
	//		month = "August";
	//		m = 7;
	//		setMonth(m);
	//		setDay(d);
	//	}

	//	if (d <= daysAtEndOfMonth[8])
	//	{
	//		month = "September";
	//		m = 8;
	//		setMonth(m);
	//		setDay(d);
	//	}

	//	if (d <= daysAtEndOfMonth[9])
	//	{
	//		month = "October";
	//		m = 9;
	//		setMonth(m);
	//		setDay(d);
	//	}

	//	if (d <= daysAtEndOfMonth[10])
	//	{
	//		month = "November";
	//		m = 10;
	//		setMonth(m);
	//		setDay(d);
	//	}

	//	if (d <= daysAtEndOfMonth[11])
	//	{
	//		month = "December";
	//		m = 11;
	//		setMonth(m);
	//		setDay(d);
	//	}

	//	if (day = daysAtEndOfMonth[m])
	//	{
	//		m + 1;
	//		month = monthName[m];
	//		setMonth(m);
	//		DayOfYear::operator++(m);
	//	}

	//	if (day < daysAtEndOfMonth[m])
	//	{
	//		m - 1;
	//		month = monthName[m];
	//		setMonth(m);
	//		DayOfYear::operator--(m);
	//	}

	//	if (day > daysAtEndOfMonth[11])
	//	{
	//		m = 0;
	//		month = monthName[0];
	//		setMonth(m);
	//		this->day = 1;
	//	}

	//}

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

string DayOfYear::setMonth(int s)
{
	return monthName[s];
}

string DayOfYear::validateMonth()
{
	string month;
	int d = getDay();

	int m = 0; // <<< fix 
	// Setting the day of the month for the particular month
	// If its a certain day for the month of Jan - Dec

	if (d == 0)
	{
		d = 1;
	}

	{ // day validations for the months
		if (d <= daysAtEndOfMonth[0])
		{
			month = "January";
			setMonth(m);
			m = 0;
			DayOfYear::operator++(d);
			setDay(d);
		}

		if (d <= daysAtEndOfMonth[1])
		{
			month = "February";
			setMonth(m);
			m = 1;
			setDay(d);
		}

		if (d <= daysAtEndOfMonth[2])
		{
			month = "March";
			setMonth(m);
			m = 2;
			setDay(d);
		}

		if (d <= daysAtEndOfMonth[3])
		{
			month = "April";
			setMonth(m);
			m = 3;
			setDay(d);
		}

		if (d <= daysAtEndOfMonth[4])
		{
			month = "May";
			setMonth(m);
			m = 4;
			setDay(d);
		}

		if (d <= daysAtEndOfMonth[5])
		{
			month = "June";
			setMonth(m);
			m = 5;
			setDay(d);
		}

		if (d <= daysAtEndOfMonth[6])
		{
			month = "July";
			setMonth(m);
			m = 6;
			setDay(d);
		}

		if (d <= daysAtEndOfMonth[7])
		{
			month = "August";
			setMonth(m);
			m = 7;
			setDay(d);
		}

		if (d <= daysAtEndOfMonth[8])
		{
			month = "September";
			setMonth(m);
			m = 8;
			setDay(d);
		}

		if (d <= daysAtEndOfMonth[9])
		{
			month = "October";
			setMonth(m);
			m = 9;
			setDay(d);
		}

		if (d <= daysAtEndOfMonth[10])
		{
			month = "November";
			setMonth(m);
			m = 10;
			setDay(d);
		}

		if (d <= daysAtEndOfMonth[11])
		{
			month = "December";
			setMonth(m);
			m = 11;
			setDay(d);
		}

		if (day = daysAtEndOfMonth[m])
		{
			m + 1;
			month = monthName[m];
			setMonth(m);
			DayOfYear::operator++(m);
		}

		if (day < daysAtEndOfMonth[m])
		{
			m - 1;
			month = monthName[m];
			setMonth(m);
			DayOfYear::operator--(m);
		}

		if (day > daysAtEndOfMonth[11])
		{
			m = 0;
			month = monthName[0];
			setMonth(m);
			this->day = 1;
		}

	}
	return month;
}

//

DayOfYear DayOfYear::operator++(int day)
{
	// if day = 0 
	// add 1
	int h = 0;
	string month = validateMonth();
	day = getDay();
	++day;
	return DayOfYear(month, day);
}

DayOfYear DayOfYear::operator--(int day)
{
	int h = 0;
	string month = validateMonth();
	day = getDay();
	day--;
	return DayOfYear(month, day);
}
