// Sao Nguyen
#pragma once
// specification file for the Pharmacy class
#ifndef Pharmacy_H
#define Pharmacy_H

class Pharmacy
{
private:
	// variables
	double oxyCotin;
	double morphine;
	double aspirin;
	double memoryMedication;
	double glasses;
	double no;

public:
	// constructor
	Pharmacy();

	// accessor or getter
	double getMedication1();
	double getMedication2();
	double getMedication3();
	double getMedication4();
	double getMedication5();
	double getMedication6();

	// member function
	double pharmacyCharge(int choice);
};
#endif
