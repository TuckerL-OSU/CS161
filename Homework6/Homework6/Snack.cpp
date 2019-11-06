/*****************************************************************************
* Tucker Lavell
* 5/9/2017
* CS161 Spring 2017
* Assignment 6: Vending Machine. This program will take users input to a
	vending machine and "vend" the selection. It will track inventory value,
	inventory quantities, and information about the snack.
*****************************************************************************/
#include <iostream>
#include "Snack.hpp"

// default constructor
Snack::Snack()
{
	snackName = "bottled water";
	snackPrice = 1.75;
	snackCalories = 0;
}

// constructor
Snack::Snack(string name, double price, int calories)
{
	snackName = name;
	snackPrice = price;
	snackCalories = calories;
}

// getters for name, price, and calories
string Snack::getName()
{
	return snackName;
}

double Snack::getPrice()
{
	return snackPrice;
}

int Snack::getNumCalories()
{
	return snackCalories;
}