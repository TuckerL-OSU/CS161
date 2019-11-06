/*****************************************************************************
* Tucker Lavell
* 5/14/2017
* CS161 Spring 2017
* Assignment 7b: Standard Deviation. Takes user input for an Array of people,
	and the arrays size. It then returns the standard deviation of the 
	POPULATION of the given array.
*****************************************************************************/
#include <cmath>
#include "Person.hpp"
// prototype
double findMean(Person[], int);

double stdDev(Person people[], const int SIZE)
{
	double stdDev = 0.0;
	// using a mean variable/function to prevent a nested loop
	double mean = findMean(people, SIZE);

	// finds the sum of age minus mean squared
	for (int i = 0; i < SIZE; i++)
	{
		stdDev += pow(people[i].getAge() - mean, 2);
	}
	// find the square root of the sum of ages divided by size of population
	// type casting to avoid double divided by int truncation
	stdDev = pow(stdDev / (double)SIZE, 0.5);
	
	return stdDev;
}

// finds the mean age of all the people given
double findMean(Person peopleArray[], const int SIZE)
{
	double sum = 0.0;

	// finds the total age of all the people given
	for (int i = 0; i < SIZE; i++)
	{
		sum += peopleArray[i].getAge();
	}

	// mean = sum of array / size of array
	// casting size in case of truncation double divided by int
	return sum / (double)SIZE;
}