/* 
 * AUTHOR: Andrew Riley
 * DATE: 7/28/2021
 * 
 * AiregeadBanking.cpp - An application designed to teach the power of investments
 *						 and compound interest. The user inputs their initial deposit,
 *						 additional monthly deposits, the interest rate, and the length
 *						 of the investment. The app then shows how much their money will
 *						 grow using that data.
 */

#include <iostream>
// Includes Menu.h and Projections.h 
#include "Menu.h"
#include "Projections.h"

int main() {
	char input = 'y';
	// While loop allows for user to run multiple projections
	while (input == 'y') {
		PrintMenu();  // Calls PrintMenu() from Menu.h
		PrintProjections();  // Calls PrintProjections from Projections.h
		// Prompt user to continue with more projections or quit the program
		cout << "\nWould you like to do another projection? (Press 'y' for Yes or 'q' to quit)" << endl;
		cin >> input;
		// If user inputs 'q', the program prints a terminiation message and ends the program
		if (input == 'q') {
			cout << "Program complete, have a great day!" << endl;
		}
	}
	return 0;
}
