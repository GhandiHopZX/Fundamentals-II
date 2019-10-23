#include <iostream>
#include <cstdlib>
#include <string>
#include "DayOfYear.h"

using namespace std;

int main()
{
	DayOfYear dayofyearobj;
	int day;

	cout << "This program converts a number into a string representing the day of the year.\n"
		<< "" << endl;

	cout << "Enter a whole number between 1 and 365: ";
	cin >> day;

	// set the day
	try
	{
		dayofyearobj.setDay(day);
	}
	catch (dayofyearobj)
	{
		
	}

	// display the object
	dayofyearobj.print();

	// new line
	cout << endl;

	// pause
	system("PAUSE");

	return 0;

}