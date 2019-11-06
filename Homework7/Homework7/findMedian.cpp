/******************************************************************************
* Tucker Lavell
* 5/14/2017
* CS161 Spring 2017
* Assignment 7a: Find Median. Takes a users input for an array full of ints
	and its size. It then sorts the array back into the same array, and 
	find the median of the numbers input.
******************************************************************************/
#include <algorithm>

// prototypes
bool isEven(int);

double findMedian(int numbers[], const int SIZE)
{
	double median = 0.0;

	std::sort(numbers, numbers + SIZE);

	if (isEven(SIZE))
	{
		// if the array is even, the average of the 2 numbers at the middle
		// are the median
		median = (numbers[(SIZE / 2) - 1] + numbers[SIZE / 2]) / 2.0;
	}
	else
	{
		// if the array is odd, the median is exactly in the middle
		median = numbers[SIZE / 2];
	}

	return median;
}

// checks if the size of the array is even or odd
bool isEven(int size)
{
	return (size % 2 == 0);
}
