// SkillPractice8.cpp : This file contains the 'main' function.
// Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

template <class T> 
T factorial(T n)
{
	if (n == 0)
		return 1; // back to here
	else
	{
		unsigned
			long long int fact = recursiveMulti(n - 1);
		return fact * n; // from here 
	}
	//return n;
}

template <class T>
T recursiveAddition(T x, T y)
{
	int z; // equals x * y
	z = x + y;

	if (z >= x)
	{
		x += y;
		return x;
	}
	else 
	{
		return z = x + y;
	}
}

template <class T>
T recursiveMulti(T x, T y)
{
	int z = y + x;

	if (z + y > x)
	{
		x += y;
		return x;
	}
	else
	{
		return z = x + y;
	}
}

int main()
{
	unsigned long long int m;
	unsigned long long int d;

	cout << "Input two numbers for multiplication..." << endl;
	cin >> m;
	cin >> d;
	cout << recursiveMulti(m, d) << endl;
	cout << endl;

	cout << endl;
	system("PAUSE");
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
