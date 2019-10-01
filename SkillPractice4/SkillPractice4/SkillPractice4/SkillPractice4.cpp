/******************************
   Solomon Pattee
   9/30/2019
   SkillPractice4.cpp
   Description
*******************************/

#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include "testScores.h"

using namespace std;

// Global variables

// constants 
const int NUM_TESTS = 3;

// Function declarations

int main()
{
	// variables
	int t1, t2, t3;

	// total scores
	int total;

	// Integers for tests to take in
	cout << "Enter the first test score: " << endl;
	cin >> t1;

	cout << "Enter the second test score: " << endl;
	cin >> t2;
	
	cout << "Enter the third test score: " << endl;
	cin >> t3;

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
