/******************************
   Name
   Date
   File Name template.cpp
   Description
********************************/

// Headers
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

// Global variables

// Function declarations
void sign(unsigned long long int);

int main()
{
	//	Your code goes here
	int number; 

	cout << "enter a value and I will enter a sign: ";
	cin >> number;

	sign(number);

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

void sign(unsigned long long int num) // this was a while loop and now its a recursive function
{
	if (num > 0)
	{
		cout << num << endl;
		cout << "No parking." << endl;
		sign(--num);
	}
	else
	{
		return;
	}
}
