#pragma once
#ifndef DayOfYear_H
#define DayOfYear_H

#include <iostream>
#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

class DayOfYear
{
private:
	int day;

public:
	// constructors
	DayOfYear();

	DayOfYear(string month, int);

	//setters/mutator 
	static int daysAtEndOfMonth[];
	static string monthName[];
	void print();
	//getters/accessor 
	void setDay(int day) { this->day = day; }
	void getDay() { this->day; }
};
#endif