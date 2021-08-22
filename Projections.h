/*
* AUTHOR: Andrew Riley
* DATE: 7/28/2021
* 
* Projections.h - Creates layout and calculations for balance and interest accrued
*/

#ifndef AIRGEADBANKING_PROJECTIONS_H
#define AIRGEADBAKING_PROJECTIONS_H

#pragma once
#include <iostream>
#include <iomanip>
#include "Menu.h"  // Includes declared variables and data input from Menu.h

void PrintProjections() {
	yearTotal = initInv;

	// Designs layout of Projections screen banner without monthly deposits
	cout <<"     Balance and Interest Without Additional Monthly Deposits     " << endl;
	cout << setw(65) << setfill('=') << "=" << endl;
	cout << "  Year";
	cout << setw(26) << setfill(' ') << "Year End Balance";
	cout << setw(33) << "Year End Earned Interest  " << endl;
	cout << setw(65) << setfill('-') << "-" << endl;
	// for loop iterates for however many years the user input
	for (int i = 0; i < years; ++i) {
		interestAmt = yearTotal * (annualInt / 100.0);  // Uses user input to calculate interest
		yearTotal = yearTotal + interestAmt;  // Gets total of each yearly total plus interest accrued

		// Designs layout of projections 
		cout << "   " << left << setw(16) << setfill(' ') << (i + 1);
		cout << "$" << setw(33) << fixed << setprecision(2) << yearTotal;
		cout << "$" << setw(2) << interestAmt;
		cout << endl;
	}
	yearTotal = initInv;
	
	// Designs banner for projections w/ monthly deposits
	cout << "\n\n      Balance and Interest With Additional Monthly Deposits    " << endl;
	cout << right << setw(65) << setfill('=') << "=" << endl;
	cout << "  Year";
	cout << setw(26) << setfill(' ') << "Year End Balance";
	cout << setw(33) << "Year End Earned Interest  " << endl;
	cout << setw(65) << setfill('-') << "-" << endl;
	for (int i = 0; i < years; ++i) {
		yearTotalInt = 0;
		for (int j = 0; j < 12; ++j) {
			interestAmt = (yearTotal + monthDep) * ((annualInt / 100) / 12);  // Calculates interest with additional monthly deposits
			yearTotalInt = yearTotalInt + interestAmt;
			yearTotal = yearTotal + monthDep + interestAmt;
		}
		cout  << "   " << left << setw(16) << setfill(' ') << (i + 1);
		cout << "$" << setw(33) << fixed << setprecision(2) << yearTotal;
		cout << "$" << setw(2) << yearTotalInt;
		cout << endl;
	}
}

#endif // AIRGEADBANKING_PROJECTIONS_H