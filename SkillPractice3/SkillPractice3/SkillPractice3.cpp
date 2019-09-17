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

const int MAX = 24;

struct Division
{
	char divName[12]; // 12 bytes
	int quarter; // 4 byts
	double sales; // 8 bytes
};


// Function declarations
void average(int east[MAX], int west[MAX], int north[MAX], int south[MAX]);

int main()
{
	// Your code goes here
	// file stream object
	fstream file;
	
	// open the file
	file.open("corp.dat", ios::in | ios::out | ios::binary);

	// create the division structure variables for each division
	Division east, west, north, south; // each has 4 quarters of number data

	// int 

	int salesEast[MAX] = {0};
	int salesWest[MAX] = {0};
	int salesNorth[MAX] = {0};
	int salesSouth[MAX] = {0};

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
	cout << "Enter the quarterly sales for the East Division:\n";
	for (qtr = 1; qtr <= 4; qtr++)
	{
		east.quarter = qtr;
		cout << "\tQuarter " << qtr << ": ";
		cin >> east.sales;
		file.write(reinterpret_cast<char*>(&east), sizeof(east));
	}
//*/
	 //get sales data for the east division
	cout << "Enter the quarterly sales for the West Division:\n";
	for (qtr = 1; qtr <= 4; qtr++)
	{
		west.quarter = qtr;
		cout << "\tQuarter " << qtr << ": ";
		cin >> west.sales;
		file.write(reinterpret_cast<char*>(&west), sizeof(west));
	}
//
//	get sales data for the east division
	cout << "Enter the quarterly sales for the North Division:\n";
	for (qtr = 1; qtr <= 4; qtr++)
	{
		north.quarter = qtr;
		cout << "\tQuarter " << qtr << ": ";
		cin >> north.sales;
		file.write(reinterpret_cast<char*>(&north), sizeof(north));
	}
//
//	1000 each quarter for each division is what I used
//
	cout << "Enter the quarterly sales for the South Division:\n";
	for (qtr = 1; qtr <= 4; qtr++)
	{
		south.quarter = qtr;
		cout << "\tQuarter " << qtr << ": ";
		cin >> south.sales;
		file.write(reinterpret_cast<char*>(&south), sizeof(south));
	}



	// new array data
	int newDataE[8] = {  };
	int newDataN[8] = {  };
	int newDataS[8] = {  };
	int newDataW[8] = {  };

	////data for each division
	//for (int i = 4; i <= 8; i++)
	//{

	//}
	

//*/
// get sales data for the east division
	cout << "The Average quarterly sales for the division are: ";

	// Average function call
	/*average(east, west, north, south);*/
	average(newDataE, newDataW, newDataN, newDataS);

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

void average(int east[MAX], int west[MAX], int north[MAX], int south[MAX])
{
	//variable numbers 
	int eastS = 0;
	int westS = 0;
	int northS = 0; 
	int southS = 0;
	int average = 0;
	int total = 0;


	total = eastS + westS + northS + southS;

	average += (total) / 4;

	// average calculation
	cout << average;
}