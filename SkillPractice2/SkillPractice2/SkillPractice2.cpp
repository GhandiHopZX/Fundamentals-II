/******************************
   Solomon Pattee
   9/11/2019
   SkillPractice2.cpp
   Finding the median in a pointer array
********************************/

// Headers
#include <iostream>
#include <cstdlib>
#include <string>
#include <memory>
#include <cmath>

using namespace std;

// Global variables

// Function declarations

int* arrayAllocator(int);
void X();

int main()
{
	//	Calling the main program
	X();

	//	Make sure we place the end message on a new line
	cout << endl;

	//	The following is system dependent. It will only work on Windows
	system("PAUSE");

	/* ass
	// A non-system dependent method is below
	cout << "Press any key to continue";
	cin.get();
	*/
	return 0;
}
// arrayAllocator function, takes an int for size, dynamically allocates
// an array of ints on the number passed in, returns a pointer to the 
// array

void X()
{
	//	Your code goes here
	int numElements;	// holdt he number of elements
	int* pointer = nullptr;	 // a pointer to the array, set to 0
	int i;

	//
	cout << "\enter the size of the int array: ";
	cin >> numElements;

	// allocate the array
	pointer = arrayAllocator(numElements);

	// fill the array with values 
	for (i = 0; i < numElements; i++)
		* (pointer + i) = i;

	// display the values
	cout << "\n\nHere are the values in the array:\n";
	for (i = 0; i < numElements; i++)
		cout << "Element " << i << " has the value " << *(pointer + i) << endl;

	// deallocate the array
	delete[] pointer;
	pointer = nullptr;

}


int* arrayAllocator(int num)
{
	int* arrPtr = nullptr;

	// allocate space for the array
	arrPtr = new int[num];

	// return the address of the allocated memory
	return arrPtr;
}