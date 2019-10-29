#pragma once
#include <string>

using namespace std;

class Employee
{
private:
	string name; // employee name
	string number;
	string hireDate;

public:
	// default constructor
	Employee()
	{
		name = ""; number = ""; hireDate = "";
	}

	// constructor
	Employee(string aName, string aNumber, string aDate)
	{
		name = aName;
		number = aNumber;
		hireDate = aDate;
	}
	
	// mutator
	void setName(string n)
	{
		name = n;
	}

	void setNumber(string num)
	{
		number = num;
	}

	void setHireDate(string date)
	{
		hireDate = date;
	}

	// accessor (or getter)
	string getName()
	{
		return name;
	}

	string getNumber()
	{
		return number;
	}

	string getHireDate()
	{
		return hireDate;
	}

	/*string getAll()
	{
		string temp;
		temp = name + "~" + number + "~" + hireDate;
		return temp;
	}*/

};
