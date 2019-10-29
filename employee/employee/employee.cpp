/******************************
   Sol	
   10/28/2019
   Employee.cpp
   Description
********************************/

// Headers
#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include "ProductionWorker.h"

using namespace std;

// Global variables

// Function declarations

void displayInfo(ProductionWorker);

int main()
{
	//	Your code goes here
	ProductionWorker pw("John Jones", "123", "10/12/2010", 2, 18.00);
	displayInfo(pw);

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

void displayInfo(ProductionWorker e)
{
	cout << setprecision(2) << fixed << showpoint;
	cout << "Name: " << e.getName() << endl;
	cout << "Employee number: " << e.getNumber() << endl;
	cout << "Hire Date : " << e.getHireDate() << endl;
	cout << "Shift: " << e.getShiftName() << endl;
	cout << "PayRate: " << e.getPayRate() << endl;

}