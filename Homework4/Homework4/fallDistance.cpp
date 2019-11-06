/*****************************************************************************
* Tucker Lavell
* 4/25/2017
* CS161 Spring 2017
* Assignment 4a: Fall Distance. This program will take a value (time) passed
	to it from a user created main(). It will then take that value and use it
	to calculate how far an object has fallen in the given time.
*****************************************************************************/

#include <iostream>
#include <cmath>

// using these, because it is unknown what may be in the users main()
using std::cout;
using std::cin;
using std::endl;


// takes t (time) from main() and returns the distance the object has traveled
// in that amount of time
double fallDistance(double t)
{
	// known gravity contsant
	const double G = 9.8;
	// distance the object has traveled
	double d;

	return d = .5 * G * pow(t, 2.0);
}

