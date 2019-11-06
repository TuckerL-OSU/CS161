/*****************************************************************************
* Tucker Lavell
* 4/12/2017
* CS161 Spring 2017
* Assignment 2b: Temperature Converter. This program will take an input of a
Temperature (assumedly in Celsius) from the user, and convert it to
Farenheit and print it for the user to see.
*****************************************************************************/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

// this is a small program, everything will happen in main()
int main()
{
	// undeclared because 0 is significant with temperatures
	double tempCel;
	double tempFah;

	// asks the user for the temperature they want to convert from Cel to Fah
	cout << "Please enter a Celsius temperature." << endl;
	cin >> tempCel;

	// does the math to convert Celsius to Fahrenheit
	tempFah = (tempCel * 9) / 5 + 32;

	// prints the converted temperature for the user
	cout << "The equivalent Fahrenheit temperature is:" << endl;
	cout << tempFah << endl;

	return 0;
}