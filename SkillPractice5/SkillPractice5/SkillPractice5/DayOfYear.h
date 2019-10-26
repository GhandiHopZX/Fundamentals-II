#pragma once
#ifndef DayOfYear_H
#define DayOfYear_H

#include <iostream>
#include <string>
#include <iostream>
#include <cstdlib>
#include <string>

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
	void setDay(int day) { this->day = day; }
	//getters/accessor 
	int getDay() { // set day
		return this->day; }
	string setMonth(int s);
	string validateMonth();
	//void operandD = (const DayOfYear & this->day);
	// operand 
	DayOfYear operator++(int day);
	DayOfYear operator--(int day);

};
#endif


