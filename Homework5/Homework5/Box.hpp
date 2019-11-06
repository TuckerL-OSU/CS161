/*****************************************************************************
* Tucker Lavell
* 5/2/2017
* CS161 Spring 2017
* Assignment 5a: Box. This program will find the volume and surface area of
a users input dimensions. Header file with class definitions
*****************************************************************************/
#pragma once
#ifndef BOX_HPP
#define BOX_HPP

class Box
{
private:
	double height;
	double width;
	double length;

public:
	Box();
	Box(double, double, double);
	bool setHeight(double);
	bool setWidth(double);
	bool setLength(double);
	double calcVolume();
	double calcSurfaceArea();
};

#endif