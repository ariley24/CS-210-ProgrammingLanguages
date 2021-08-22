/*
 *AUTHOR: Andrew Riley
 *DATE: 7/28/2021
 * 
 * Menu.h - Creates initial menu screen prompting user to input
 *			initial investment, monthly deposits, interest rate,
 *			and years.
 */

#ifndef AIRGEADBANKING_MENU_H
#define AIRGEADBANKING_MENU_H

#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

int initInv, monthDep, years, months;  // Declares int variable for initial investment, monthly deposit, years, and months
double annualInt, yearTotal, interestAmt, yearTotalInt;  // Declares double variables for interest, yearly total, interest amount, and yearly total interst


void PrintMenu() {  // Creates function for printing initial menu and prompting user input

	// Design Data Input banner
	cout << setw(33) << setfill('*') << "*" << endl;
	cout << setw(10) << setfill('*') << "*";
	cout << " Data Input ";
	cout << setw(10) << setfill('*') << "*" << endl;
	/* Prompts user to enter data. While loops verify user input 
		is the correct type and prompts user to re-enter invalid data.
		Once valid data is input by user, program continues.*/
	while (true) {
		cout << "Initial Investment Amount: $";
		cin >> initInv;
		if (cin.fail()) {
			cout << "Invalid input! Please enter a number!" << endl;
			cin.clear();
			cin.ignore();
		}
		else {
			break;
		}
	}
	while (true) {
		cout << "Monthly Deposit: $";
		cin >> monthDep;
		if (cin.fail()) {
			cout << "Invalid input! Please enter a number!" << endl;
			cin.clear();
			cin.ignore();
		}
		else {
			break;
		}
	}
	while (true) {
		cout << "Annual Interest: %";
		cin >> annualInt;
		if (cin.fail()) {
			cout << "Invalid input! Please enter a number!" << endl;
			cin.clear();
			cin.ignore();
		}
		else {
			break;
		}
	}
	while (true) {
		cout << "Number of years: ";
		cin >> years;
		if (cin.fail()) {
			cout << "Invalid input! Please enter a number!" << endl;
			cin.clear();
			cin.ignore();
		}
		else {
			break;
		}
	}
	months = years * 12;  // Converts years from input to months

	system("pause");  //Pauses program and displays "Press any key to continue..."
	cout << endl;
	

}

#endif // AIRGEADBANKING_MENU_H
