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

	DayOfYear(string month, int day[30]); // month string and day int range 0 - 31

	static int daysAtEndOfMonth[];
	static string monthName[];
	void print();
	void setDay(int day) { this->day = day; }

};
#endif