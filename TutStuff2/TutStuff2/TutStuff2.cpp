// TutStuff2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>

using namespace std;

struct rune
{
	string name;
	string dec;
	string type;
	int* id = nullptr;
};

class Cpal
{
	protected: 
		string men;

	private:
		int me = 0;
		string name;

	public: 
		void setName(string x)
		{
			name = x;
			cout << "ble" << endl;
		}
		string getName() 
		{
			return name;
		};
};

class Momisdead
{
public:
	string name;
};

int main()
{
	// multiple instantiations
	Momisdead ded;
	ded.name = "mom";
	cout << ded.name;

	Cpal mo;
	mo.setName("wowNIPX");
    std::cout << "Hello World!\n";
	mo.setName(ded.name);

	mo.setName("bleck");
	cout << mo.getName();

	cout << "\n";
	system("PAUSE");
	return 0;
}

int rContainer()
{
	rune Tainer;
	rune prp;
	rune megani;

	int tainer0 = 0;
	int markp1 = 0;
	int meg2 = 0;

	Tainer.id = &tainer0;
	prp.id = &markp1;
	megani.id = &meg2;
	
	int items0[]=  { tainer0 };
	int items1[] = { markp1 };
	int items2[] = { meg2 };

	for (int i; items0 < 0; i++)
	{
		cout << items0[i];
	}

	return;
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
