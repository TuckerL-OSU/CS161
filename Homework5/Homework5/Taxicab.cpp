/*****************************************************************************
* Tucker Lavell
* 5/2/2017
* CS161 Spring 2017
* Assignment 5b: Taxicab. This program will track the distance traveled by 
	a taxi cab as well as its location in space.
*****************************************************************************/
#include "Taxicab.hpp"
#include <iostream>
#include <cmath>

// default constructor
Taxicab::Taxicab()
{
	xCoord = 0;
	yCoord = 0;
	odometer = 0;
}

// constructor -  odometer should always be reset back to 0
Taxicab::Taxicab(int x, int y)
{
	xCoord = x;
	yCoord = y;
	odometer = 0;
}

// getters for x and y position
int Taxicab::getXCoord()
{
	return xCoord;
}

int Taxicab::getYCoord()
{
	return yCoord;
}

// getter for odometer total
int Taxicab::getDistanceTraveled()
{
	return odometer;
}

// coordinates in space can be negative
// odometer distances must be positive
void Taxicab::moveX(int x)
{
	xCoord += x;
	odometer += std::abs(x);
}

void Taxicab::moveY(int y)
{
	yCoord += y;
	odometer += std::abs(y);
}

// practicing destructor behavior
Taxicab::~Taxicab()
{
	std::cout << "destruction" << std::endl;
}