/******************************************************************************
* Tucker Lavell
* 5/23/2017
* CS161 Spring 2017
* Assignment 8b: repeatArray. This takes in a reference to a pointer of a
	dynamically allocated array of doubles, and the size of the array. It then
	creates a new array that is twice the size of the original and repeated. It
	then deletes the original array so that the new array can be written to it.
	Then the new array is deleted to prevent memory leaks.
******************************************************************************/
#include <algorithm>
#include <iostream>

void repeatArray(double* &inputArray, const int SIZE)
{
	// creating a dynamically allocated sized array
	double* newArray = new double[SIZE * 2];
	for (int i = 0; i < SIZE; i++)
	{
		// since newArray is twice the size of the original array and repeated,
		// the values found at inputArray[i] can be store at i and i + size
		newArray[i] = newArray[i+SIZE] = *&inputArray[i];
	}
	// deletes inputArray so that it can be reset with the values of newArray
	delete[] inputArray;
	inputArray = newArray;

	// delete/nullifies the array we created using "new"
	newArray = NULL;
}