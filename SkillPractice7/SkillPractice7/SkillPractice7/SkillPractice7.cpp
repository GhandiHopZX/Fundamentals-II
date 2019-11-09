/*
//	Name: Solomon Pattee
//	Date: 11/12/2019
//	Filename: SkillPractice7.cpp
//	Description: Absolute value calculator
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

// templates 
template <class T>
T absolute(T ab1)
{
	// variables
	double abd = 0.0;
	int abi = 0; 
	float abf = 0.0;

	abi = ab1;
	abf = ab1;
	abd = ab1;

	// convert to an integer
	static_cast<int>(abd);
	static_cast<int>(abf);
	static_cast<int>(abi);

	// absolute calculation
	if (abf != 0)
	{
		return abs(abf);
	}
	else if (abd != 0)
	{
		return abs(abd);
	}
	else if (abi != 0)
	{
		return abs(abi);
	}
	else
	{
		return abs(ab1);
	}
}

int main()
{
	// integer for input
	double d = 0.0;

	// greet the viewer
	cout << fixed << "\t\t\t" << "=====:: Here is the absolute value calculator for any number ::=====" << endl;

	// input the number to convert into an absolute value
	cout << "Input a number: " << endl;
	cin >> d;
	// here is the absolute value
	cout << "Absolute value of inputed number: " << absolute(d) << endl;
}