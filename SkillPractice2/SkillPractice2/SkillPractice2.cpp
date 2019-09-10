/******************************
   Solomon Pattee
   9/4/2019
   SkillPractice2.cpp
   Description
********************************/

// Headers
#include <iostream>
#include <cstdlib>
#include <string>
#include <memory>

using namespace std;

// Global variables

// Function declarations

double* thptr = nullptr;

double* getAddress();

int* arrayAllocator(int);


int main()
{
	//	Make sure we place the end message on a new line
	cout << endl;

	//	The following is system dependent. It will only work on Windows
	system("PAUSE");

	/*
	// A non-system dependent method is below
	cout << "Press any key to continue";
	cin.get();
	*/
	return 0;
}
// arrayAllocator function, takes an int for size, dynamically allocates
// an array of ints on the number passed in, returns a pointer to the 
// array

double* getAddress()
{
	double x = 42.42;

	double* ptrAddress = &x;

	return ptrAddress;
}

int* arrayAllocator(int)
{
	return nullptr;
}
