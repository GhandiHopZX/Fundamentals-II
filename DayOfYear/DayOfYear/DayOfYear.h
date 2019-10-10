#pragma once
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
	static int daysAtEndOfMonth[];
	static string monthName[];
	void print();
	void setDay(int day) { this->day = day; }
	
};
