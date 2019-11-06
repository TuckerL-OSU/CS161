/*****************************************************************************
* Tucker Lavell
* 5/14/2017
* CS161 Spring 2017
* Assignment 7b: Person class file
*****************************************************************************/
#include <iostream>
#include "Person.hpp"

// constructor
Person::Person(std::string name, double age)
{
	personName = name;
	personAge = age;
}

// getters for name and age
std::string Person::getName()
{
	return personName;
}

double Person::getAge()
{
	return personAge;
}