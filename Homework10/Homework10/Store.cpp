/******************************************************************************
* Tucker Lavell
* 6/5/2017
* CS161 Spring 2017
* Assignment 10: Store. Uses Product and Customer objects to to perform the
	functions related to running a store.
******************************************************************************/
#include "Store.hpp"
#include <iostream>
#include <iomanip>
#include <algorithm>

void Store::addProduct(Product* addToInv)
{
	inventory.push_back(addToInv);
}

void Store::addMember(Customer* addToCust)
{
	members.push_back(addToCust);
}

// return pointer with matching ID
Product* Store::getProductFromID(std::string productId)
{
	for (Product* product : inventory)
	{
		if (product->getIdCode() == productId)
		{
			return product;
		}
	}
	return nullptr;
}

// return pointer to customer with matching ID
Customer* Store::getMemberFromID(std::string customerId)
{
	for (Customer* customer : members)
	{
		if (customer->getAccountID() == customerId)
		{
			return customer;
		}
	}
	return nullptr;
}

void Store::productSearch(std::string search)
{
	// transforms the search to lowercase
	std::transform(search.begin(), search.end(),
		search.begin(), ::tolower);

	// loops through each product in inventory, and prints the
	// needed info about each matching entry of the search
	for (Product* productSearch : inventory)
	{
		std::string title = productSearch->getTitle();
		std::string description = productSearch->getDescription();

		// locally transforms title and desc of each item tolower forcomparison
		std::transform(title.begin(), title.end(),
			title.begin(), ::tolower);
		std::transform(description.begin(), description.end(),
			description.begin(), ::tolower);

		// check if the search is in the title or the desc
		if (title.find(search) != std::string::npos ||
			description.find(search) != std::string::npos)
		{
			std::cout << productSearch->getTitle() << std::endl;
			std::cout << "ID code: " << productSearch->getIdCode()
				<< std::endl;
			std::cout << "price: $" << std::fixed << std::setprecision(2)
				<< productSearch->getPrice() << std::endl;
			std::cout << productSearch->getDescription() << std::endl
				<< std::endl;
		}
	}
}

// checks if the product and memeber exist, then adds them to the customer cart
// if both exist and there is 1 or more
void Store::addProductToMemberCart(std::string productId, std::string memberId)
{
	Product* productFound = getProductFromID(productId);
	Customer* customerFound = getMemberFromID(memberId);

	if (productFound == nullptr)
		std::cout << "Product #" << productId << " not found." << std::endl;

	if (customerFound == nullptr)
		std::cout << "Member #" << memberId << " not found." << std::endl;

	// short circuits before quantity if product or cust are not found
	if (productFound != nullptr && customerFound != nullptr &&
		productFound->getQuantityAvailable() == 0)
		std::cout << "Sorry, product #" << productId
		<< " is currently out of stock." << std::endl;
	else
		customerFound->addProductToCart(productId);
}

// checks if the person trying to checkout is a member. If they are it gets
// their cart and performs the necessary recipt printing and inventory tracking
void Store::checkOutMember(std::string memberId)
{
	double subtotal = 0.0;
	double shippingMultiplier = 1.07;

	Customer* custCart = getMemberFromID(memberId);
	Product* product = nullptr;

	if (custCart != nullptr)
	{
		if (custCart->getCart().size() > 0)
		{
			// check for premium; if they are, set the multi to 1.0 for later
			if (custCart->isPremiumMember())
				shippingMultiplier = 1.0;

			// loops through the matching customers cart for every item in it
			for (std::string itemId : custCart->getCart())
			{
				// if the product is found
				if ((product = getProductFromID(itemId)) != nullptr)
				{
					// if the product is found and has 1 or more in stock
					if (product->getQuantityAvailable() > 0)
					{
						std::cout << product->getTitle() << " - $"
							<< std::fixed << std::setprecision(2)
							<< product->getPrice() << std::endl;
						product->decreaseQuantity();
						subtotal += product->getPrice();
					}
					else
						std::cout << "Sorry, product #"
							<< product->getIdCode()
							<< ", \"" << product->getTitle()
							<< "\", is no longer availiable." << std::endl;
				}
			}

			std::cout << "Subtotal: $" << std::fixed << std::setprecision(2)
				<< subtotal << std::endl;
			// if premium, shows shipping as 0
			// otherwise shows shipping as 7% of subtotal
			std::cout << "Shipping Cost: $"
				<< subtotal * (shippingMultiplier - 1.0) << std::endl;
			std::cout << "Total: $" << subtotal * shippingMultiplier << std::endl;
			// empty the cart once they check out
			custCart->emptyCart();
		}
		else
		{
			std::cout << "There are no items in the cart." << std::endl;
		}
	}
	else
	{
		std::cout << "Member #" << memberId << " not found." << std::endl;
	}
}