#pragma once
// specs for the class
#ifndef Surgery
#define Surgery

class Surgery
{

private:

	const double knee_Surgery = 100.00;
	const double back_Surgery = 200.00;
	const double heart_Surgery = 300.00;
	const double brain_Surgery = 400.00;
	const double eyeball_Surgery = 500.00;
	const double none = 0.00;

public:

	Surgery();
	~Surgery();

	knee();

	back();

	heart();

	brain();

	eyeBall();

	none();

};
#endif // !Surgery

