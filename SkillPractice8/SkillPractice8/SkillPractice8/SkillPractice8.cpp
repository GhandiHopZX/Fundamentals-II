#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <iomanip>

using namespace std;

//template <class T>
//T factorial(T n)
//{
//	if (n == 0)
//		return 1; // back to here
//	else
//	{
//		unsigned
//			long long int fact = recursiveMulti(n - 1);
//		return fact * n; // from here
//	}
//	//return n;
//}

//template <class T>
//T recursiveAddition(T x, T y)
//{
//	int z; // equals x * y
//	z = x + y;
//
//	if (z >= x)
//	{
//		x += y;
//		return x;
//	}
//	else
//	{
//		return z = x + y;
//	}
//}

template <class T>
T product(T x, T y)
{
	if (y > 1) {
		return(x + (product(y - 1, x)));
	}
	else if ((x == 0) || (y == 0))
	{
		return 0;
	}
	else if (y == 1)
	{
		return x;
	}
	else
	{
		return x;
	}	
}


int main()
{
	int m;
	int d;

	cout << "Input two numbers for multiplication..." << endl;
	cin >> m;
	cin >> d;
	int result = product(m, d);
	cout << result << endl;
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