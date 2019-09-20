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
	cout << "                        By: THE TERMINATORS                      " << endl;
	cout << "*****************************************************************" << endl << endl;

	int choice;
	//enter choice
	cout << "The following program allows you to alter Customer Account information." << endl;
	cout << "To write a record to a file select 1." << endl;
	cout << "To display a record of your choice select 2." << endl;
	cout << "To delete a record select 3. " << endl;
	cout << "To show all records select 4." << endl;
	cout << "Select 5 to quit the program." << endl << endl;

	while (choice != 5)
	{
		switch (choice) {
		case 1:
			setInfo();//write a record to a file
			break;
		case 2:
			display(info);//call display function
			break;
		case 3:
			deleteRec(); //call delete record function
			break;
		case 4:
			show(info); //call show all function
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
void display(Customer c[]//Christina Camacho
	{
	int i;
//open file
	fstream file("custFile.dat", ios::out | ios::binary);

	cout << "Display a record. " << endl;
cout << "---------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;



cout << "Select which customer record you would like to pull up by entering their First Name, Space, Last Name. For example: John Smith." << endl;
		cin >> c[i].name;
		&search(position);//call search function
While([i] == [j])
			cout << "Name: " << c[j].name << endl;
			cout << "Address: " << c[j].address << endl;
			cout << "City: " << c[j].city << " State: " << c[i].state
			<< "Zip code: " << c[j].zip << endl;
			cout << "Phone Number: " << c[j].phone << endl;
			cout << "Current Balance: " << c[j].balance << endl;
			cout << "Last Payment: " << c[j].lastPay << endl;
	}

	//close the file
file.close();

}

// *****************************************************************
// The search function returns the file pointer position.          *
// *****************************************************************
long search(int names[CUSTSIZE])
{
	Customer info[CUSTSIZE];
	fstream file("custFile.dat", ios::out | ios::binary);
	fstream fileTemp("tempFile.dat", ios::out | ios::binary);

	string sName = "";
	cout << "What name do you wish to search for...?" << endl;
	getline(cin, sName);

	long pos = 0; // position in the file

	string tIndex[CUSTSIZE][5]; // terminator Index

	// address
	file.beg();

	// The five rings
	//tIndex[CUSTSIZE] = {};
	string name1;

	file.seekg(0L, ios::beg); // to the end
	while (!file.eof) // Not at end of file
	{
		// list search
		file.seekg(0L, 324L); // intervals
		// each customer is 323bytes so each one has an address
		file.read(reinterpret_cast<char*>(&info), sizeof(info));
		file.seekg(324L, 647L);
		// next
		file.read(reinterpret_cast<char*>(&info), sizeof(info));
		// next
		file.seekg(647L, 970L);
		file.read(reinterpret_cast<char*>(&info), sizeof(info));
		// next
		file.seekg(970L, 1293L);
		file.read(reinterpret_cast<char*>(&info), sizeof(info));
		// next
		file.seekg(1293L, 1615L);
		file.read(reinterpret_cast<char*>(&info), sizeof(info));
	}

	// search loop
	for (int i = 0; i < 5; i++)
	{
		if (sName != tIndex[i])
		{
			tIndex[i];
		}
		else {
			cout << "Here is your personel" << tIndex[i];
		}
	}


	//close the files
	fileTemp.close();
	file.close();

	return;
}

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
		cout << "City and State:  " << c[x].state << c[].city << endl;
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
