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
int bianarySearch(const int MAX, int elements, int value);

// the struct data
struct names
{
	char nameinFirst[MAXCHAR];
	char nameinMiddle[MAXCHAR];
	char nameinLast[MAXCHAR];
	int ID;
};

int main()
{
	// creating the names for each variable
	names first, middle, last, value;

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
	value= Index.ID ;

	// index
	string first[] = { Index.nameinFirst };
	string last[] = {Index.nameinLast};
	string middle[] = {Index.nameinMiddle};
	int position = -1;

	bool found = false;

	for (int i = 0; !found && first[i] <= last[i], i++;);
	{
		middle[i] = (first + last[i]) / 2;
		if (middle[i] == value)
		{
			found = true;
			position = middle[i];
		}
		else if (middle[i] > value)
			last[i] = middle[i] - 1;
		else
			first[i] = middle[i] + 1;
	}
	return position / 2;
}