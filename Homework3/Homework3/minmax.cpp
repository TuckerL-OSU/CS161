/*****************************************************************************
* Tucker Lavell
* 4/19/2017
* CS161 Spring 2017
* Assignment 3a: MinMax Calculator. This program will take an input of a
	number from the user. It will then store that number and ask the user to
	enter the number of integers that match the desired number. It will then
	print the minimum and maximum values that were entered.
*****************************************************************************/

#include <iostream>
#include <string>
#include <limits.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	// number input by user
	int number = 0;
	// current number the user has entered
	int currentInputNumb;
	// initilizes min and max as the opposite highest/lowest value for 
	// comparison in the loop
	// this will make it easier, because instead of trying to store a random
	// number of variables (without arrays), it will just compare inputs to
	// see if they are lower or higher than the previous input.
	// by initilizing from the highest possible value of an int, it is very
	// likely the next number will be less, creating a realistic new min
	int min = INT_MAX;
	// by initilizing from the lowest possible value of an int, it is very
	// likely the next number will be greater, creating a realistic new max
	int max = INT_MIN;


	cout << "How many integers would you like to enter?" << endl;
	// stores the number of integers the user would like to find the min/max of
	cin >> number;

	cout << "Please enter " << number << " integers." << endl;
	// this will loop through all the numbers input, and between each input
	// it will calculate if the current input is less/greater than the
	// current min/max
	// we should start counting at 0 so the counter (i) will end up being 
	// equal to number minus 1
	for (int i = 0; i <= number - 1; i++)
	{
		//cin >> currentInputNumb;
		//if (currentInputNumb < min)
		//	min = currentInputNumb;
		//else if (currentInputNumb > max)
		//	max = currentInputNumb;
		cin >> currentInputNumb;
		if (currentInputNumb < min && currentInputNumb > max)
		{
			min = currentInputNumb;
			max = currentInputNumb;
		}
		else if (currentInputNumb < min)
			min = currentInputNumb;
		else if (currentInputNumb > max)
			max = currentInputNumb;
	}

	// prints out the min and max for the user to read
	cout << "min: " << min << endl;
	cout << "max: " << max << endl;

	return 0;
}