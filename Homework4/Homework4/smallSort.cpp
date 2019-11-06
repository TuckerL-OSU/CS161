/*****************************************************************************
* Tucker Lavell
* 4/25/2017
* CS161 Spring 2017
* Assignment 4b: Small Sort. Takes 3 values by reference from the users own
	main() and sorts them from smallest to largest.
*****************************************************************************/

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

// prototypes for the other functions used
void sortItOut(int &, int &);
void swap(int &, int &);

// sends the inputs in pairs to sortItOut for simplier sorting
void smallSort(int &a, int &b, int &c)
{
	sortItOut(a, b);
	sortItOut(a, c);
	sortItOut(b, c);
}

// determines if the inputs need to be sorted, or if they are already in the
// correct order
void sortItOut(int &a, int &b)
{
	if (a > b)
		swap(a, b);
}

// if the values needed to be swapped then they will have their positions
// "switched" in memory, that is why they are passed by reference
void swap(int &first, int &second) 
{
	int temp = first;
	first = second;
	second = temp;
}