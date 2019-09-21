/******************************
   Team Name:The Terminators
   Date: 9-25-2019
   File Name spc12-16.cpp
   Description:
Your group project is on page 717, assignment number 16 - Customer Accounts.
Main Christina
setInfo Sao
Display 1 record Christina
Search Sol
deleteRec Jeremy
Showall  Christion
********************************/
// Chapter 12, Programming Challenge 16: Customer Accounts
// Headers
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;


// Constant for array sizes
const int SIZE = 45;
const int CUSTSIZE = 5;

fstream custFile;      // Customer file
fstream tempFile;      // For deletion swap

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
void setInfo(long);     // write record to file
void display(Customer[]);     // display one record
long search();          // call a search in the function so we do not have to keep writing them
void deleteRec(long);   // delete one record
void showAll();         // display all records

// flags to signal setInfo()
bool rnew = false;      // To signal if the record is new  
bool mod = false;       // To signal if the record is being modified

int main() //Christina Camacho
{
	//creating the file
	//Open, close and temp files in the function to make it safer
	//fstream file("custFile.dat", ios::out | ios::binary);
	//fstream fileTemp("tempFile.dat", ios::out | ios::binary);

	//calls structure into the main function
	Customer info[SIZE];
	cout << "*****************************************************************" << endl;
	cout << "                         CUSTOMER ACCOUNTS                       " << endl;
	cout << "                        By: THE TERMINATORS					  " << endl;
	cout << "						 MODDED alpha BY ZERO					  " << endl;
	cout << "*****************************************************************" << endl << endl;

	int choice = 0;
	//enter choice
	cout << "The following program allows you to alter Customer Account information." << endl;
	cout << "To write a record to a file select 1." << endl;
	cout << "Test Sol's function 2." << endl; // even tho mine is better >)
	//cout << "To display a record of your choice select 2." << endl;
	cout << "To delete a record select 3. " << endl;
	cout << "To show all records select 4." << endl;
	cout << "Select 5 to quit the program." << endl << endl;

	cin >> choice; // user input

	while (choice != 5)
	{
		switch (choice) {
		case 1:
			//setInfo();//write a record to a file
			break;
		case 2:
			search();//display(info);//call display function
			break;
		case 3:
			//deleteRec(); //call delete record function
			break;
		case 4:
			//showAll(); //call show all function
			break;
		}
		//Option to request that a person write a record first or to return an error message is no records exists
		cout << "What is your selection now?" << endl;
		cout << "To write a record to a file select 1." << endl;
		cout << "To display a record of your choice select 2." << endl;
		cout << "To delete a record select 3. " << endl;
		cout << "To show all records select 4." << endl;
		cout << "Select 5 to quit the program." << endl << endl;
	}

	return 0;
}

// *****************************************************************
// The setInfo function write record to the file.                  *
// *****************************************************************
void setInfo(long fp)
{
	Customer info[CUSTSIZE];
	custFile.open("custFile.dat", ios::out | ios::binary);

	// Get the information of each customer
	for (int count = 0; count < CUSTSIZE; count++)
	{
		cout << "Please Enter Your Name: ";
		do { //will repeat until the correct information is provided
			cin >> info[count].name;
		} while (info[count].name[0] == '\0'); //while choice is null repeat
		cout << "Please Enter Your Home Address: ";
		cin >> info[count].address;
		cout << "Please Enter Your City: ";
		cin >> info[count].city;
		cout << "Please Enter Your State: ";
		cin >> info[count].state;
		cout << "Please Enter Your Zip Code: ";
		cin >> info[count].zip;
		cout << "Zip code must be 5 numbers. Please try again." << endl;
		cout << "Please Enter Your Telephone Number: ";
		cin >> info[count].phone;
		cout << "Please Enter Your Account Balance: ";
		cin >> info[count].balance;
		// validate the account balance 
		if (info[count].balance < 0)
		{
			cout << "Sorry, We Don't Accept Negative Value!"
				<< "Try Again: ";
			cin >> info[count].balance;
		}
		else
		{
			cin >> info[count].balance;
		}
		cout << "Please Enter Date of Your Last Payment: ";
		cin >> info[count].lastPay;
		cout << endl;
		cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		custFile.write(reinterpret_cast<char*>(&info), sizeof(info));

	}
	custFile.close();
}
// *****************************************************************
// The display function displays a single record.                  *
// *****************************************************************
//void display(Customer c[])//Christina Camacho
//	{
//	int i;
//	int j;
////open file
//	fstream file("custFile.dat", ios::out | ios::binary);
//
//	cout << "Display a record. " << endl;
//cout << "---------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
//
//
//
//cout << "Select which customer record you would like to pull up by entering their First Name, Space, Last Name. For example: John Smith." << endl;
//		cin >> c[i].name;
//		search();//call search function
//	while([i] == [j]){
//			cout << "Name: " << c[j].name << endl;
//			cout << "Address: " << c[j].address << endl;
//			cout << "City: " << c[j].city << " State: " << c[i].state
//			<< "Zip code: " << c[j].zip << endl;
//			cout << "Phone Number: " << c[j].phone << endl;
//			cout << "Current Balance: " << c[j].balance << endl;
//			cout << "Last Payment: " << c[j].lastPay << endl;
//	}
//
//	//close the file
//file.close();
//
//}

// *****************************************************************
// The search function returns the file pointer position.          *
// *****************************************************************
long search()
{
	Customer info[CUSTSIZE];
	fstream file("custFile.dat", ios::out | ios::binary);
	fstream fileTemp("tempFile.dat", ios::out | ios::binary);

	
	char sName[45] = {};
	cout << "What name do you wish to search for...?" << endl;
	cin >> sName;

	// 

	bool flag = false; // found

	long pos = 0; // position in the file

	Customer tIndex[CUSTSIZE]; // terminator Index
	// name take
	tIndex[CUSTSIZE].name = sName;
	// address
	file.read(reinterpret_cast<char*>(&info), sizeof(info));

	// The five rings
	//tIndex[CUSTSIZE] = {};

	file.seekg(0L, ios::beg); // to the end

	while (!file.eof()) // Not at end of file
	{
		//string temp = "";
		//getline(file, temp); // get from file
		for (int i = 0; i < info.size(); i++)
		{
			if (info[i].name == tIndex[i].name)
			{
				flag = 1;
			}
			else
			{
				flag = 0;
				break;
			}
		}

		if (flag)
		{
			for (int i = tIndex[i].name() + 1; i < info.size(); i++)
			{
				cout << info[i];
				break;
			}
		}

		if (file.eof() && (!flag))
		{
			cout << "Name not found!\n";
		}
		//if (pos != hadangeki)
		//{
		//	file.read(reinterpret_cast<char*>(&pos), sizeof(pos));
		//}
		//else
		//{
		//	flag = true;
		//}

		//// list search for comparisons
		//file.seekg(0L, 324L); // intervals
		//// each customer is 323bytes so each one has an address
		//file.read(reinterpret_cast<char*>(&info[1]), sizeof(info[1]));
		//// next
		//file.seekg(324L, 647L);
		//file.read(reinterpret_cast<char*>(&info[2]), sizeof(info[2]));
		//// next
		//file.seekg(647L, 970L);
		//file.read(reinterpret_cast<char*>(&info[3]), sizeof(info[3]));
		//// next
		//file.seekg(970L, 1293L);
		//file.read(reinterpret_cast<char*>(&info[4]), sizeof(info[4]));
		//// next
		//file.seekg(1293L, 1615L);
		//file.read(reinterpret_cast<char*>(&info[5]), sizeof(info[5]));
		
	}
	// hadangeki copys from the input that is converted to bytes
	long hadangeki = static_cast<long>(sName.size());
	
	//close the files
	fileTemp.close();
	file.close();

	return hadangeki;//pos; // returns that long
}
//
//string toString()
//{
//	Customer m;
//
//	cout << m[].address;
//	cout << m[].balance;
//	cout << m[].city;
//	cout << m[].lastPay;
//	cout << m[].name;
//	cout << m[].phone;
//	cout << m[].state;
//	cout << m[].zip;
//}

// *****************************************************************
// The showAll function shows all the customer records.            *
// *****************************************************************
void showAll(Customer c[])    //christion butterworth
{
	fstream file("custFile.dat", ios::out | ios::binary);
	fstream fileTemp("tempFile.dat", ios::out | ios::binary);

	for (int x = 0; x < CUSTSIZE; x++)
	{
		cout << "All Customer Accounts\n";
		cout << "Name: " << c[x].name << endl;
		cout << "Address: " << c[x].address << endl;
		cout << "City and State:  " << c[x].state << c[x].city << endl;
		cout << "Zip: " << c[x].zip << endl;
		cout << "Phone Number : " << c[x].phone << endl;
		cout << "Current Balance : " << c[x].balance << endl;
		cout << "Last Payment : " << c[x].lastPay << endl;
	}

	//close the files
	fileTemp.close();
	file.close();
}

// *****************************************************************
// This function marks a record for deletion by placing            *
// the null terminator at the beginning of the name member.        *
// The contents of the file are then copied to a temporary file,   *
// then the temporary file is copied back to the Customer file     *
// -- without the deleted record.                                  *
// Ideally, this function would be expanded to allow multiple      *
// record deletions before the final file swap takes place.        *
// *****************************************************************
void deleteRec(long fp)    // Jeremy Laney
{
	custFile.open("customer.txt", ios::out | ios::in | ios::binary);
	string name;    // variable to hold name
	Customer tempInfo[SIZE];
	cout << "Please enter the customer or customers name whose file you would like to delete: " << endl;
}
