/******************************
   Solomon Pattee
   9/16/2019
   SkillPractice3.cpp
   A program that reads in 
   a file and outputs figures
********************************/

// Headers
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

// Global variables

struct Division
{
	char divName[12];
	int quarter;
	double sales;
};

// Function declarations
void average(Division east, Division west, Division north, Division south);

int main()
{
	// Your code goes here
	// file stream object
	fstream file;
	
	// open the file
	file.open("corp.dat", ios::in | ios::binary);

	// create the division structure variables for each division
	Division east, west, north, south; // each has 4 quarters of number data

	// loop counter for each quarter
	int qtr;
	// assign the division names to the division structure var
	strcpy_s(east.divName, "East");
	strcpy_s(west.divName, "West");
	strcpy_s(north.divName, "North");
	strcpy_s(south.divName, "South");

	//pulling the data 
	// east data
	file.read(reinterpret_cast<char*>(&east), sizeof(east));

	// west data
	file.read(reinterpret_cast<char*>(&west), sizeof(west));

	// north data
	file.read(reinterpret_cast<char*>(&north), sizeof(north));

	// south data
	file.read(reinterpret_cast<char*>(&south), sizeof(south));

	// get sales data for the east division
	/*cout << "Enter the quarterly sales for the East Division:\n";
	for (qtr = 1; qtr <= 4; qtr++)
	{
		east.quarter = qtr;
		cout << "\tQuarter " << qtr << ": ";
		cin >> east.sales;
		
	}
*/
	// get sales data for the east division
	/*cout << "Enter the quarterly sales for the West Division:\n";
	for (qtr = 1; qtr <= 4; qtr++)
	{
		west.quarter = qtr;
		cout << "\tQuarter " << qtr << ": ";
		cin >> west.sales;
		file.write(reinterpret_cast<char*>(&west), sizeof(west));
	}*/

	// get sales data for the east division
	/*cout << "Enter the quarterly sales for the North Division:\n";
	for (qtr = 1; qtr <= 4; qtr++)
	{
		east.quarter = qtr;
		cout << "\tQuarter " << qtr << ": ";
		cin >> north.sales;
		file.write(reinterpret_cast<char*>(&north), sizeof(north));
	}*/

	// get sales data for the east division
	cout << "The Average quarterly sales for the division are: ";

	// Average function call
    average(east, west, north, south);

	/*for (qtr = 1; qtr <= 4; qtr++)
	{
		south.quarter = qtr;
		cout << "\tQuarter " << qtr << ": ";
		cin >> south.sales;
		file.write(reinterpret_cast<char*>(&south), sizeof(south));
	}
*/
	// close the file
	file.close();

	// Make sure we place the end message on a new line
	cout << endl;

	// The following is system dependent. It will only work on Windows
    system("PAUSE");

	/*
	// A non-system dependent method is below
	cout << "Press any key to continue";
	cin.get();
	*/
	return 0;
}

void average(Division east, Division west, Division north, Division south)
{
	//variable numbers 
	int eastS, westS, northS, southS;
	int average = 0;

	eastS = east.sales;
	westS = west.sales;
	northS = north.sales;
	southS = south.sales;

	average = (eastS + westS + northS + southS) / 4;

	// average calculation
	cout << average;
}