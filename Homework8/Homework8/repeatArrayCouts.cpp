#include <algorithm>
#include <iostream>

void repeatArray(double *&inputArray, const int SIZE)
{
	std::cout << "inside repeatArray" << std::endl;
	// creating a dynamically allocated sized array
	double* newArray = new double[SIZE * 2];
	for (int i = 0; i < SIZE; i++)
	{
		// since newArray is twice the size of the original array and repeated,
		// the values found at inputArray[i] can be store at i and i + size
		newArray[i] = newArray[i + SIZE] = *&inputArray[i];
		std::cout << "this is at i: " << newArray[i] << std::endl;
		//newArray[i + SIZE] = *&inputArray[i];
		std::cout << "this is at i+size: " << newArray[i + SIZE] << std::endl;
	}
	std::cout << "this is in newArray" << std::endl;
	for (int i = 0; i < SIZE * 2; i++)
	{
		std::cout << newArray[i] << " ";
	}
	std::cout << std::endl;
	// deletes inputArray so that it can be reset with the values of newArray
	delete[] inputArray;
	inputArray = newArray;

	// delete the array we created using "new"
	newArray = NULL;
	if (newArray == NULL)
		std::cout << "empty" << std::endl;
	else
		std::cout << "broken" << std::endl;
}