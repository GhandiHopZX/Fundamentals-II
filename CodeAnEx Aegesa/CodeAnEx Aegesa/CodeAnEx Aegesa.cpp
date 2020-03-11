// CodeAnEx Aegesa.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Created by: Solomon Pattee

#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <list>
#include <iterator>
#include <ctime>
#include <chrono>
#include "World.h"

using namespace std;

// templates
template <class printedT>
printedT output(string i)
{
	cout << setprecision(2) << fixed << endl;
	return i;
}

// globals

World d;

// function declarations
void menyu();
string dialougeInput(string);
char choiceIN(string);

int main()
{
	system("Color 0A");
	// formating
	// title screen
#pragma region Title

	cout 
		<< "####################################################################################################################\n"
		<< "#####################################################################################################################\n"
		<< "#####################################################################################################################\n"
		<< "   CCCCCCCCCCC        OOOOOOOOOO            DDDDDDDD              EEEEEEEEEEEEEEEEEEE   \n"
		<< "  CCCCC              OOO        OOO         DD       DD           EEEEEEEE    \n"
		<< " CC                 OO           OO         DD         DD          EE     \n"
		<< "CC                 OO              OO       DD         DD          EE   \n"
		<< "CC       =====  == OO              OO  ==  DD         DD   ==    EEEEEEEEE    === \n"
		<< "CC       =====  == OO             OO ==   DD         DD   ==    EEEEEEEEEE   === \n"
		<< " CC                OO            OO      DD        DD           EE                                       XXXXX    XXXXXXX\n"
		<< "  CC                OO          OO      DD       DD            EE                                    XXXX      XXXXXX\n"
		<< "   CCCCC             OO        OO      DD     DDD             EEEEEE                               XXXX    XXXXX\n"
		<< "    CCCCCCCCCCC       OOOOOOO         DDDDDDDDD              EEEEEEEEEEEEEEEEE                    XXX    XXXX\n"
		<< "                                                                     XXXXXX     XXXX          XXXXX  XXXXX\n"
		<< "   AAAAAAA                                     EEEEEEEEEEEEEEEE             XXX     XX      XXX   XXX\n"
		<< "   AA    AA                                   EEEEE                             XX   XX XXX      XXX\n"
		<< "  AAA    AAA                                 EEEE                                  X XXXXXXXX\n"
		<< "  AAAA     AAAA                              EEE                                   XXXXXXX \n"
		<< "  AA  AAAAAAAAAAA          NN    NNNNNN     EEEEEEEEE    ===   ==    =          XXXXXXXXX             == = == = \n"
		<< "   AA          AAAA         NNNN       NN   EEEEEEEEEEE   == ===   =         XXXXXXX  XXXXX XX = =   ===  = \n"
		<< "    AA           AAAAA       NN         NN   EEEE                        XXXXXX        XXXX    XXX   \n"
		<< "     AA            AAAAA      NN         NN     EEEE                  XXXXXX            XXXX    XXXXXX \n"
		<< "      AA              AAAAA     NN         NN      EEEEEEEEEE    XXXXXXXX                 XXXX    XXXXX\n"
		<< "       AA                AAAAA   NN          NN     EEEEEEEEEEEEEEEE                         XXX    XXXXXXXXX\n"
		<< "                                                                                                      XXXXXXXXXXXXXXXXX\n"
		<< "################################################################################################################################# = =     - - - -  + +  \n"
		<< "==========         ------           ------=-=-=-              ===   = -=--           =---==--  ===--            ========- -    --+ == +=+ = -\n"
		<< "==========  ==    ------    ----------=----          =-=---=     === = --    ----------=----==     = ===----====    =====  ==    -----  \n"
		<< "=========   ===   ------    -------=---==-      --= ========      -  = --    --=============== ==    ====================   ===   ----+   +    +  + + -  \n"
		<< "========   ======-------   ---------=------   =  -= =========   = -= -=-=-     --------=------=====     ==== ============   ======----*   *   **    * * --    \n"
		<< "=======           ------==            ---=-     ==== ===============  = --==          ---=-= ==========      ===========           --- + +   ++ + -+   + ++-    \n"
		<< "======    ======    --------   -----=------ --      --======-=        ===---==   -----=------=---- === ===       ======    ======    ---            \n"
		<< "=====    ========    =======    ====-=------ --       = = =====   -  = -======    ====-=----- ===========         ====    ========    == + +   + +     \n"
		<< "=====    ========     =======               -=-- -                -= -=========               ===              =======    ========     =   +  + +  + +   \n"
		<< "=================---------------------=--------========================-=- -  = -= -=-=- = ========---- === ========    \n"

		<< endl;
#pragma endregion

	cout << "Press Enter to Play" << endl;
	cin.get();
	system("CLS");
	// gamemenu

	menyu();

	system("PAUSE");
}

void menyu()
{
	cout << "Main Menu\n"
		<< "\n"
		<< "New Game (n)\n"
		<< "Continue (c)\n"
		<< "Quit Game (q)" << endl;

	// choice goes here
	char choice{};
	string choiceS;
	
	getline(cin, choiceS);

	choice = choiceIN(dialougeInput(choiceS));
	while (getchar() != '\n'); // flush


	do
	{
		switch (choice)
		{
		case 'n':
		case 'N':
			system("CLS");
			//DELETE CHOICE
			choice = '\0';
			d.beginningStory();
			break;

		case 'c':
		case 'C':
			system("CLS");
			break;

		case 'q':
		case 'Q':
			system("CLS");
			cout << endl;
			cout << "GoodBye!" << endl;
			choice = '4';
			break;

		default:
			cout << "Invalid option..." << endl; // infinite loop of death
			cin.get();
			system("CLS");
			menyu();
			break;
		};
	} while (choice != '4');
}

string dialougeInput(string pvalue)
{
	//getline(cin, pvalue);
	pvalue.erase(remove(pvalue.begin(), pvalue.end(), '\n'), pvalue.end());
	return pvalue;
}

char choiceIN(string choiceBuffer)
{
	//string choiceBuffer;
	char choice = NULL;
	//cin >> choice;
	char* choiceWritable = new char[choiceBuffer.size() + 1];

	copy(choiceBuffer.begin(), choiceBuffer.end(), choiceWritable);

	choiceWritable[choiceBuffer.size()] = '\0';

	char* choice3 = choiceWritable;

	char& choice4 = *choice3;

	choice = choice4;

	delete[] choiceWritable;

	return choice;
}