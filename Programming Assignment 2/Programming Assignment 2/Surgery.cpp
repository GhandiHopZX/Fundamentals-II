#include "Surgery.h"

// here are all the functions
//Surgery::knee() 
//Surgery::back() 
//Surgery::heart() 
//Surgery::brain() 
//Surgery::eyeBall() 
//Surgery::none() 
using namespace std;

Surgery::Surgery()
{

}

double Surgery::knee()
{
	return kneeSurgery;
}

double Surgery::back()
{
	return backSurgery;
}

double Surgery::heart()
{
	return heartSurgery;
}

double Surgery::brain()
{
	return brainSurgery;
}

double Surgery::eyeBall()
{
	return eyeballSurgery;
}

double Surgery::none()
{
	return no;
}

double Surgery::surgeryCharge(int choice)
{
	switch (choice)
	{
	case 1:
		return knee();
		break;
	case 2:
		return back();
		break;
	case 3:
		return heart();
		break;
	case 4:
		return brain();
		break;
	case 5:
		return eyeBall();
		break;
	case 6:
		return none();
		break;
	default:
		break;
	}
}