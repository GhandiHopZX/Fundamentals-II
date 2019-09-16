// Name: Solomon Pattee

// Headers
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


// variables
const int MAXCHAR = 40;

// Prototypes
int bianarySearch(const int MAX, int elements, int value)

// the struct data
struct names
{
	char[MAXCHAR] nameinFirst;
	char[MAXCHAR] nameinMiddle;
	char[MAXCHAR] nameinLast;
	int ID;
};

int main()
{
	// creating the names for each variable
	Names first, middle, last, value;

	// assign names for each person in the structure var
	strcpy_s(first.nameinFirst, "First");
	strcpy_s(middle.nameinMiddle, "Middle");
	strcpy_s(last.nameinLast, "Last");

}

// function declarations

int bianarySearch(const int MAX, int elements, int value)
{
	// strings 

	names Index;
	Index.ID = value;

	// index

	int first = 0;
	int last = 0;
	int middle = 0;
	int position = -1;

	bool found = false;

	while (!found && first <= last) / 2;
	{
		middle = (first + last) / 2;
		if (array[middle] == value)
		{
			found = true;
			position = middle;
		}
		else if (array[middle] > value)
			last = middle - 1;
		else
			first = middle + 1;
	}
	return position;
}


}