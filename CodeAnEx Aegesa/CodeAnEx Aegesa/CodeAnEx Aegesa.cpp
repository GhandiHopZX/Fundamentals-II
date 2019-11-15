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

using namespace std;

// templates
template <class printedT>
printedT output(string i)
{
	cout << setprecision(2) << fixed << endl;
	return i;
}

template <class T>
T absolute(T ab0, T ab1, T ab2, T ab3)
{
	// absolute calculation
	if (ab0 != 0) // long
	{
		return static_cast<long>(abs(ab0));
	}
	else if (ab1 != 0) // double
	{
		return static_cast<double>(abs(ab1));
	}
	else if (ab2 != 0) // int
	{
		return static_cast<int>(abs(ab2));
	}
	else if (ab3 != 0) // float
	{
		return static_cast<float>(abs(ab3));
	}
	else
	{
		return abs(ab1);
	}
}

// globals

// function declarations

int main()
{
	// formating
	// title screen
	cout << "####################################################################################################################\n"
		<< "#####################################################################################################################\n"
		<< "#####################################################################################################################\n"
		<< "   CCCCCCCCCCC        OOOOOOOOOO            DDDDDDDD              EEEEEEEEEEEEEEEEEEE   \n"
		<< "  CCCCC              OOO        OOO         DD       DD           EEEEEEEE    \n"
		<< " CC                 OO           OO         DD         DD          EE     \n"
		<< "CC                 OO              OO       DD         DD          EE   \n"
		<< "CC       =====  ==  OO             OO  ==  DD         DD   ==    EEEEEEEEE    === \n"
		<< "CC       =====  == OO             OO ==   DD         DD   ==    EEEEEEEEEE   === \n"
		<< " CC                OO            OO      DD        DD           EE                                       XXXXX    XXXXXXX\n"
		<< "  CC                OO          OO      DD       DD            EE                                     XXXXX     XXXXXX\n"
		<< "   CCCCC             OO        OO       DD     DDD             EEEEEE                               XXXX    XXXXX\n"
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
		// gamemenu




		<< endl;

	cout << endl;

	system("PAUSE");
}