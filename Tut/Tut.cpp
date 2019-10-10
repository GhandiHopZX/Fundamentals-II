// Tut.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

// Constant for array sizes
const int SIZE = 45;
const int CUSTSIZE = 5;

fstream custFile("custFile.dat", ios::in | ios::out | ios::binary);

// Customer file
//fstream tempFile("custFile.dat", ios::out | ios::binary);
// For deletion swap

struct Customer
{
	char name[SIZE];
	char address[SIZE];
	char city[SIZE];
	char state[SIZE];
	char zip[SIZE];
	char phone[SIZE];
	double balance;
	char lastPay[SIZE];
};

// Function prototypes
long S(char* a, char* b);

// flags to signal setInfo()

int main()
{
	std::cout << "Hello World!\n";
	// void functions


	return 0;
}

void write()
{
	fstream custFile("custFile.dat", ios::in | ios::out | ios::binary);
	custFile.write(reinterpret_cast<char*>(&custFile), sizeof(custFile));
	custFile.open("custFile.dat");

}

long S(char* a, char* b)
{
	fstream custFile("custFile.dat", ios::in | ios::out | ios::binary);
	Customer H;
	custFile.seekg(0L, ios::end); // to the end
	custFile.read(reinterpret_cast<char*>(&custFile), sizeof(custFile));
	custFile.open("custFile.dat");

	while (!custFile.eof())
	{

	}

	return 0;
}
