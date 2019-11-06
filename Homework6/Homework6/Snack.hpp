#pragma once
#ifndef SNACK_HPP
#define SNACK_HPP
#include <iostream>
using std::string;

class Snack
{
private:
	string snackName;
	double snackPrice;
	int snackCalories;

public:
	Snack();
	Snack(string, double, int);
	string getName();
	double getPrice();
	int getNumCalories();
};

#endif // !SNACK_HPP
