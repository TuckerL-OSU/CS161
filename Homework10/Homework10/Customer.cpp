/******************************************************************************
* Tucker Lavell
* 6/5/2017
* CS161 Spring 2017
* Assignment 10: Store. Customer Class File. Contains methods and variables
	related to a Customer in the Store.
******************************************************************************/
#include "Customer.hpp"

// constructor
Customer::Customer(std::string custName, std::string custAccId, bool custPrem)
{
	name = custName;
	accountID = custAccId;
	premiumMember = custPrem;
}

// getters for ID, cart, and premium
std::string Customer::getAccountID()
{
	return accountID;
}

std::vector<std::string> Customer::getCart()
{
	return cart;
}

bool Customer::isPremiumMember()
{
	return premiumMember;
}

// adds the product recieved from store to the specific customers cart
void Customer::addProductToCart(std::string toCart)
{
	cart.push_back(toCart);
}

// mostly used to empty the cart after checkout
void Customer::emptyCart()
{
	cart.clear();
}