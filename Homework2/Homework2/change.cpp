/*****************************************************************************
* Tucker Lavell
* 4/12/2017
* CS161 Spring 2017
* Assignment 2c: Change Calculator. This program will take an input of a
change amount from the user, and convert it to the number of quarters,
dimes, nickels, and pennies that is needed for the change
*****************************************************************************/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

// mutliple functions would be better for this,
// but we haven't learned that yet.
int main()
{
	// storing the original change amount in case it were to be needed
	int changeAmount;
	// this will have the math done to it
	int changeLeft;
	int quarters = 0;
	int dimes = 0;
	int nickels = 0;
	int pennies = 0;

	// asks the user to input the amount of change they wish to convert
	// **REQUIRES** input as a whole number
	cout << "Please enter an amount in cents less than a dollar.";
	cout << endl;
	// stores the amount
	cin >> changeAmount;
	// setting changeLeft = input, see variable comments
	changeLeft = changeAmount;

	// this is where the change will be converted
	/* QUARTERS */
	// this will take only the whole number part of the change/25
	quarters = changeLeft / 25;
	// does modular on changeLeft to get the number of cents left to calculate
	// looks like changeLeft = changeLeft % 25
	changeLeft %= 25;

	/* DIMES */
	// this will take only the whole number part of the changeLeft/10
	dimes = changeLeft / 10;
	// modular to get the number of cents left to calculate
	changeLeft %= 10;

	/* NICKELS */
	// this will take only the whole number part of changeLeft/5
	nickels = changeLeft / 5;
	// modular to get the number of cents left to calculate
	changeLeft %= 5;

	/* PENNIES */
	// this should always be a whole number, but math to make sure
	pennies = changeLeft / 1;
	// modular just to reduce changeLeft to 0
	changeLeft %= 1;

	// print out the number of quarters, dimes, nickels, and pennies needed
	cout << "Your change will be:" << endl;
	cout << "Q: " << quarters << endl;
	cout << "D: " << dimes << endl;
	cout << "N: " << nickels << endl;
	cout << "P: " << pennies << endl;

	return 0;
}