// CodeAnEx Aegesa.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>

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
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
