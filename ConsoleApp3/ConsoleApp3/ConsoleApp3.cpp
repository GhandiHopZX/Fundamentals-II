/******************************
   Solomon Pattee
   9/11/2019
   ConsoleApp3.cpp
   Description Chapter 12
********************************/

// Headers
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;

// Global variables

// Function declarations

int main()
{
	//	Your code goes here
	string name;		// to hold a file name
	string inputLine;	// to hold a line of input
	int lines = 0;	
	ifstream file;

	// get the name of the file
	cout << "Enter the file name: ";
	getline(cin, name);


	// open the file
	file.open(name);

	// test for errors
	if (!file)
	{
		cout << "Error opening " << name << endl;
		exit(EXIT_FAILURE);
	}
	// display the first ten lines from the file
	while (!file.eof() && lines < 10) // end of file
	{
		// get line
		getline(file, inputLine, '\n');
		// increment the line counter
		lines++;
		// display the line 
		cout << inputLine << endl;
	}

	// if the file had less than ten lines, indicate that
	if (lines < 10)
		cout << "\nThe entire file hase been displayed. \n";

	// close the file
	file.close();

	//	Make sure we place the end message on a new line
	cout << endl;

	//	The following is system dependent.  It will only work on Windows
	// system("PAUSE");

	/*
	// A non-system dependent method is below
	cout << "Press any key to continue";
	cin.get();
	*/
	return 0;
}
