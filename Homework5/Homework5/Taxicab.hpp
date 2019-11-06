/*****************************************************************************
* Tucker Lavell
* 5/2/2017
* CS161 Spring 2017
* Assignment 5b: Taxicab. This program will track the distance traveled by 
	a taxi cab as well as its location in space. Header file with class
	definitions
*****************************************************************************/
#pragma once
#ifndef TAXICAB_HPP
#define TAXICAB_HPP

class Taxicab
{
private:
	int xCoord;
	int yCoord;
	int odometer;

public:
	Taxicab();
	Taxicab(int, int);
	int getXCoord();
	int getYCoord();
	int getDistanceTraveled();
	void moveX(int);
	void moveY(int);
	~Taxicab();
};

#endif // !TAXICAB_HPP
