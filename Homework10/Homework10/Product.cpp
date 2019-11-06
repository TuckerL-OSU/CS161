/******************************************************************************
* Tucker Lavell
* 6/5/2017
* CS161 Spring 2017
* Assignment 10: Store. Product Class File. Contains all the methods and
	variables related to a Product Object in the store.
******************************************************************************/
#include "Product.hpp"

// constructor
Product::Product(std::string productId, std::string productTitle,
	std::string productDesc, double productPrice, int productQuant)
{
	idCode = productId;
	title = productTitle;
	description = productDesc;
	price = productPrice;
	quantityAvailable = productQuant;
}

// getters for a products ID, name, desc, price, and availiability
std::string Product::getIdCode()
{
	return idCode;
}

std::string Product::getTitle()
{
	return title;
}

std::string Product::getDescription()
{
	return description;
}

double Product::getPrice()
{
	return price;
}

int Product::getQuantityAvailable()
{
	return quantityAvailable;
}

// inventory decrement
void Product::decreaseQuantity()
{
	quantityAvailable--;
}