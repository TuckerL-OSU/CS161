/******************************************************************************
* Tucker Lavell
* 5/23/2017
* CS161 Spring 2017
* Assignment 8a: smallSort2. Very similar to assignment 4, except this time it 
	took the pointer to the address of the incoming variables instead of the 
	actual variable. It then compares the integers at the memory addresses,
	according to ascending order. It then swaps the value at that address.
******************************************************************************/

#include <iostream>
#include <cmath>

// prototypes for the other functions used
void compare(int*, int*);
void swap(int*, int*);

// sends the inputs in pairs to sortItOut for simplier sorting
void smallSort2(int* a, int* b, int* c)
{
	compare(a, b);
	compare(a, c);
	compare(b, c);
}

// determines if the inputs need to be sorted, or if they are already in the
// correct order
void compare(int* a, int* b)
{
	if (*a > *b)
		swap(a, b);
}

// if the values needed to be swapped then they will have their positions
// "switched" in memory
void swap(int* first, int* second)
{
	int temp = *first;
	*first = *second;
	*second = temp;
}