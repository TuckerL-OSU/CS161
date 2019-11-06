/*****************************************************************************
* Tucker Lavell
* 5/14/2017
* CS161 Spring 2017
* Assignment 7b: Person header file
*****************************************************************************/
#pragma once
#ifndef PERSON_HPP
#define PERSON_HPP
#include <iostream>

class Person
{
private:
	std::string personName;
	double personAge;

public:
	Person(std::string, double);
	std::string getName();
	double getAge();
};

#endif // !PERSON_HPP
