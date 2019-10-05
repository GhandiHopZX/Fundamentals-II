// Christina Camacho
#pragma once
// specification file for the PATIENT ACCOUNT class
#ifndef PatientAccount_h
#define PatientAccount_h

class PatientAccount
{
private:
	//variables used
	double dailyRate;
	double surgeryCharge;
	double pharmacyCharge;
	double dailyCharge;
	double totalCharges;
	int numDays; //number of days spent in the hospital

public:

	// constructor
	PatientAccount();

	// accessor
	int getNumDays();
	double getSurgeryCharge();
	double getPharmacyCharge();
	double getDailyCharge();
	double getTotalCharges();

	// mutator
	void setNumDays(int nd);
	void setSurgeryCharge(double sc);
	void setPharmacyCharge(double pc);
	void setDailyCharge();
	void setTotalCharges(double sc, double pc, double dc);

};
