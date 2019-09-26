#pragma once
// specification file for the Die class

#ifndef DIE_H
#define DIE_H

class Die
{
public:
	/*Die();*/
	/*~Die();*/

private:
	Die(int); // Constructor
	void roll();

	int getSides(); // returns the number sides
	int getValue(); // returns  the die's value
};
//
//Die::Die()
//{
//}
//
//Die::~Die()
//{
//}
#endif 