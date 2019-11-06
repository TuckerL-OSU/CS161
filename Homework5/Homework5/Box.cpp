/*****************************************************************************
* Tucker Lavell
* 5/2/2017
* CS161 Spring 2017
* Assignment 5a: Box. This program will find the volume and surface area of
a users input dimensions
*****************************************************************************/
#include "Box.hpp"

// default constructor -  always sets the box to 1x1x1
Box::Box()
{
	setHeight(1);
	setWidth(1);
	setLength(1);
}

// contructor
Box::Box(double height, double width, double length)
{
	setHeight(height);
	setWidth(width);
	setLength(length);
}

// setters check to make sure the number is not negative
bool Box::setHeight(double h)
{
	bool validData = true;

	if (h >= 0)
		height = h;
	else
		validData = false;

	return validData;
}

bool Box::setWidth(double w)
{
	bool validData = true;

	if (w >= 0)
		width = w;
	else
		validData = false;

	return validData;
}

bool Box::setLength(double l)
{
	bool validData = true;

	if (l >= 0)
		length = l;
	else validData = false;

	return validData;
}

// getter for volume
double Box::calcVolume()
{
	return height * width * length;
}

// getter for surface area
double Box::calcSurfaceArea()
{
	return ((2 * height * width) + (2 * width * length) +
		(2 * length * height));
}
