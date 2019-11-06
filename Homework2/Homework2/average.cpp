/*****************************************************************************
* Tucker Lavell
* 4/12/2017
* CS161 Spring 2017
* Assignment 2a: Average Calculator. This program will take an input of 5
individual numbers from the user and print out the average for the user.
*****************************************************************************/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

// this is a small program, all the magic will happen in main()
int main()
{
	// declared as 0 incase the user puts no number in
	double numOne = 0;
	double numTwo = 0;
	double numThree = 0;
	double numFour = 0;
	double numFive = 0;
	double average = 0;

	// asks the user for their 5 numbers, and stores them in numOne-numFive
	cout << "Please enter five numbers." << endl;
	cin >> numOne >> numTwo >> numThree >> numFour >> numFive;

	// does the math to average the 5 inputs, and stores it in average
	average = (numOne + numTwo + numThree + numFour + numFive) / 5;

	// prints the average in an easy to read format
	cout << "The average of those numbers is: " << average << ".";
	cout << endl;

	return 0;
}