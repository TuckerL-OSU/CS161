/*****************************************************************************
* Tucker Lavell
* 4/25/2017
* CS161 Spring 2017
* Assignment 4c: Hailstone Sequence. This will take any postitive integer from
	the users main() and perform a hailstone sequence on it. If the number is
	even it will divide by 2, if it is odd it will multiply by 3 and add 1.
	Once the math gets down to 1 stop and return the number of steps it took 
	to reach 1.
*****************************************************************************/

#include <iostream>

int hailstone(int stone) 
{
	// counter variable that we want to return in the end
	int count = 0;

	// as long as stone is greater 1 (since it is impossible for it to be
	// negative) the loop will continue
	while (stone > 1) 
	{
		// if the number is even divide it by 2, increment count, and loop again
		if (stone % 2 == 0)
			stone /= 2;
		// if the number is odd multiply it by 3 then add 1, increment count,
		// and loop again
		else
			stone = stone * 3 + 1;

		count++;
	}

	// sends count back to main()
	return count;
}
