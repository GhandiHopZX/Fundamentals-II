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
	std::cout << "*****************************************************************" << endl;
	std::cout << "                         CUSTOMER ACCOUNTS                       " << endl;
	std::cout << "                        By: THE TERMINATORS                      " << endl;
	std::cout << "*****************************************************************" << endl << endl;

	int choice = 0;
	//enter choice
	std::cout << "The following program allows you to alter Customer Account information." << endl;
	std::cout << "To write a record to a file select 1." << endl;
	std::cout << "To display a record of your choice select 2." << endl;
	std::cout << "To delete a record select 3. " << endl;
	std::cout << "To show all records select 4." << endl;
	std::cout << "Select 5 to quit the program." << endl << endl;

	while (choice != 5)
	{
		switch (choice) {
		case 1:
			search;//write a record to a file
			break;
		case 2:
			display(info);//call display function
			break;
		case 3:
			//deleteRec(search); //call delete record function
			break;
		case 4:
			//showAll(); //call show all function
			break;
		}
		//Option to request that a person write a record first or to return an error message is no records exists
		std::cout << "What is your selection now?" << endl;
		std::cout << "To write a record to a file select 1." << endl;
		std::cout << "To display a record of your choice select 2." << endl;
		std::cout << "To delete a record select 3. " << endl;
		std::cout << "To show all records select 4." << endl;
		std::cout << "Select 5 to quit the program." << endl << endl;
	}



	return 0;
}
// OREH

// *****************************************************************
// The setInfo function write record to the file.                  *
// *****************************************************************
void setInfo(long fp)
{
	Customer info[SIZE];
	fstream custFile;
	custFile.open("customer.dat", ios::out | ios::binary);

	// Get the information of each customer
	for (int count = 0; count < CUSTSIZE; count++)
	{

		do
		{
			std::cout << "Please Enter Your Name: ";
			cin.getline(info[count].name, SIZE);
		} while (info[count].name[0] == '\0');

		do
		{
			std::cout << "Please Enter Your Home Address: ";
			cin.getline(info[count].address, SIZE);
		} while (info[count].address[0] == '\0');

		do
		{
			std::cout << "Please Enter Your City: ";
			cin.getline(info[count].city, SIZE);
		} while (info[count].city[0] == '\0');

		do
		{
			std::cout << "Please Enter Your State: ";
			cin.getline(info[count].state, SIZE);
		} while (info[count].state[0] == '\0');

		do
		{
			std::cout << "Please Enter Your Zip Code: ";
			cin.getline(info[count].zip, SIZE);
		} while (info[count].zip[0] == '\0');

		do
		{
			std::cout << "Please Enter Your Telephone Number: ";
			cin.getline(info[count].phone, SIZE);
		} while (info[count].phone[0] == '\0');

		do
		{
			std::cout << "Please Enter Your Account Balance: ";
			cin >> info[count].balance;
			// validate the account balance 
			if (info[count].balance < 0)
			{
				std::cout << "Sorry, We Don't Accept Negative Value!"
					<< "Try Again: ";
				cin >> info[count].balance;
			}
		} while (info[count].balance == '\0');

		cin.ignore();
		std::cout << "Please Enter Date of Your Last Payment: ";
		cin.getline(info[count].lastPay, SIZE);
		std::cout << endl;
		std::cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		custFile.write(reinterpret_cast<char*>(&info), sizeof(info));

	}
	custFile.close();
}

//// *****************************************************************
//// The display function displays a single record.                  *
//// *****************************************************************
//void display(Customer c[])//Christina Camacho // todo fix
//{
//	int i;
////open file
//	fstream file("custFile.dat", ios::out | ios::binary);
//
//	std::cout << "Display a record. " << endl;
//	std::cout << "---------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
//
//
//
//	std::cout << "Select which customer record you would like to pull up by entering their First Name, Space, Last Name. For example: John Smith." << endl;
//		cin >> c[i].name;
//		&search(position);//call search function
//			while([i] == [j]) // todo fix
//				std::cout << "Name: " << c[j].name << endl;
//			std::cout << "Address: " << c[j].address << endl;
//			std::cout << "City: " << c[j].city << " State: " << c[i].state;
//				std:: cout << "Zip code: " << c[j].zip << endl;
//			std::cout << "Phone Number: " << c[j].phone << endl;
//			std::cout << "Current Balance: " << c[j].balance << endl;
//			std::cout << "Last Payment: " << c[j].lastPay << endl;
//
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
	Customer reader;
    fstream file("custFile.dat", ios::in | ios::binary);
	file.open( "custFile.dat", ios::in | ios::binary );

	if (!file)
	{
		std::cout << "Melm.. The file cannot be found." << endl;
	}

	string sName;
	std::cout << "Select which customer record you would like to pull up by" << endl;
	std::cout << "entering their First Name, Space, Last Name. For example: John Smith." << endl;
	cin >> sName;

	bool flag = false; // found

	// element
	int element = 0;

	long pos = 0; // position in the file

	//string tIndex[CUSTSIZE]; // terminator Index

	file.seekg(0L, ios::end); // to the end

	file.read(reinterpret_cast<char*>(&reader), sizeof(reader));

	// hadangeki copys from the input that is converted to bytes
	long hadangeki = static_cast<long>(sName.size());

	while (!file.eof()) 
	{
		// address
		if (pos != hadangeki)
		{
			info[element] = reader;
			element++;
			//file.read(reinterpret_cast<char*>(&reader), sizeof(reader));
			file.read(reinterpret_cast<char*>(&pos), sizeof(pos));

			// list search for comparisons
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
		else
		{
			file.close();
			flag = true;
			std::cout << "found" << endl;
			// search loop for comparison
			for (int i = 1; i < 5; i++) // todo
			{
				if (sName == info[i].name)
				{
					string v = info[i].name;
					// only add the below if the returned position isn't what you needed...
					// Honestly I need to know where that position is everytime I close the file
					// do I need to go back or stop after reading where I left off?
					/*
					hadangeki = static_cast<long>(v.size());
					pos = hadangeki;*/
				}
			}
		}
	}

	//close the file
	file.close();

	std::cout << pos;
	return pos; // returns that long
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
		std::cout << "All Customer Accounts\n";
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
//// *****************************************************************
//void deleteRec(long fp)    // Jeremy Laney
//{
//	custFile.open("customer.txt", ios::out | ios::in | ios::binary);
//	string name;    // variable to hold name
//	Customer tempInfo[SIZE];
//	std::cout << "Please enter the customer or customers name whose file you would like to delete: " << endl;
//}
