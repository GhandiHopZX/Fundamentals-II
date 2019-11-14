// CodeAnEx Aegesa.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Created by: Solomon Pattee

#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <list>
#include <iterator>

using namespace std;

// templates
template <class printedT>
printedT output(string i)
{
	cout << setprecision(2) << fixed << endl;
	return i;
}

template <class T>
T absolute(T ab0, T ab1, T ab2, T ab3)
{
	// absolute calculation
	if (ab0 != 0) // long
	{
		return static_cast<long>(abs(ab0));
	}
	else if (ab1 != 0) // double
	{
		return static_cast<double>(abs(ab1));
	}
	else if (ab2 != 0) // int
	{
		return static_cast<int>(abs(ab2));
	}
	else if (ab3 != 0) // float
	{
		return static_cast<float>(abs(ab3));
	}
	else
	{
		return abs(ab1);
	}
}

// globals

// function declarations

int main()
{
    cout << "Hello World!\n";

	cout << endl;

	system("PAUSE");
}