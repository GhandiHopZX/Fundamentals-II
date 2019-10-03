#pragma once
// specs for the class
#ifndef Surgery_H
#define Surgery_H

class Surgery
{

private:

	 double kneeSurgery = 100.00;
	 double backSurgery = 200.00;
	 double heartSurgery = 300.00;
	 double brainSurgery = 400.00;
	 double eyeballSurgery = 500.00;
	 double no = 0.00;

public:

	Surgery();

	double knee();

	double back();

	double heart();

	double brain();

	double eyeBall();

	double none();

	double surgeryCharge(int);

};
#endif // !Surgery

