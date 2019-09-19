// Name: Solomon Pattee

// Headers
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;


// variables
const int MAXCHAR = 40;

// Prototypes
int bianarySearch(const int MAX, int elements);

// the struct data
struct names
{
	char nameinFirst[MAXCHAR];
};

int main()
{
	// creating the names for each variable
	names first, middle, last;

	// assign names for each person in the structure var
	strcpy_s(first.nameinFirst, "First");

}

// function declarations

int bianarySearch(int elements)
{
	// Strings 

	names Index;

	// Index

	string first[] = {Index.nameinFirst};
	int position = -1;
	int count = 0;

	bool found = false;

	while (elements != Index.nameinFirst)
	{

	}

	//for (int i = 0; !found && first[i] <= last[i], i++;);
	//{
	//	int m = (first[count] + last[count]);
	//		m / 2;
	//	if (middle[m] == middle[count])
	//	{
	//		found = true;
	//		position = middle[];
	//	}
	//	else if (middle[] > count)
	//		last[] = middle[] - 1;
	//	else
	//		first[] = middle[] + 1;
	//}
	return position;
}