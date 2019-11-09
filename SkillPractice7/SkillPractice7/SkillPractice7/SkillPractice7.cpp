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

using namespace std;

// templates 
template <class T>
T absolute(T ab1)
{
	// variables
	double abd = ab1;
	int abi = ab1; 
	float abf = ab1;

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
	double d = 0.0;
	// input the number to convert into an absolute value
	cout << "Input a number: " << endl;
	cin >> d;
	// here is the absolute value
	cout << "Absolute value of inputed number: " << absolute(d) << endl;
}

