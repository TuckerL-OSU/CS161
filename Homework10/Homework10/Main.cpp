#include "Store.hpp"
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
	Customer cust("Tucker", "AD834", true);
	Customer cust1("Dan", "dsufy32", false);

	Product prod("1234", "b3ans", "frijoles negro", 69.69, 2);
	Product prod1("4569", "germs", "No", 187.65, 0);

	Store sto;

	sto.addProduct(&prod);
	sto.addProduct(&prod1);

	sto.addMember(&cust);
	sto.addMember(&cust1);

	std::cout << "CUSTOMER" << std::endl;
	std::cout << cust.getAccountID() << " " << cust1.getAccountID() << std::endl;
	std::cout << cust.isPremiumMember() << " " << cust1.isPremiumMember() << std::endl;

	std::cout << std::endl << "Cust: ";

	for (std::string str : cust.getCart())
	{
		std::cout << str << " ";
	}

	std::cout << std::endl << "Cust1:";

	for (std::string str : cust1.getCart())
	{
		std::cout << str << " ";
	}

	cust.addProductToCart("test");
	cust1.addProductToCart("test");

	std::cout << std::endl << "Cust: ";

	for (std::string str : cust.getCart())
	{
		std::cout << str << " ";
	}

	std::cout << std::endl << "Cust1: ";

	for (std::string str : cust1.getCart())
	{
		std::cout << str << " ";
	}

	cust.emptyCart();
	cust1.emptyCart();

	std::cout << std::endl << "Cust: ";

	for (std::string str : cust.getCart())
	{
		std::cout << str << " ";
	}

	std::cout << std::endl << "Cust1: ";

	for (std::string str : cust1.getCart())
	{
		std::cout << str << " ";
	}

	std::cout << std::endl << "PRODUCT";
	std::cout << std::endl << "Prod: " << prod.getIdCode();
	std::cout << std::endl << "Prod: " << prod.getTitle();
	std::cout << std::endl << "Prod: " << prod.getDescription();
	std::cout << std::endl << "Prod: " << prod.getPrice();
	std::cout << std::endl << "Prod: " << prod.getQuantityAvailable();
	std::cout << std::endl << "Prod1: " << prod1.getIdCode();
	std::cout << std::endl << "Prod1: " << prod1.getTitle();
	std::cout << std::endl << "Prod1: " << prod1.getDescription();
	std::cout << std::endl << "Prod1: " << prod1.getPrice();
	std::cout << std::endl << "Prod1: " << prod1.getQuantityAvailable() << std::endl;

	std::cout << "STORE" << std::endl;
	std::cout << "prod " << sto.getProductFromID("1234") << std::endl;
	std::cout << "cust " << sto.getMemberFromID("AD834") << std::endl;
	std::cout << "prod1 " << sto.getProductFromID("4569") << std::endl;
	std::cout << "search ";
	sto.productSearch("No");
	std::cout << "Tucker" << std::endl;
	sto.addProductToMemberCart("1234", "AD834");
	sto.addProductToMemberCart("4569", "AD834");
	for (std::string str : cust.getCart())
	{
		std::cout << str << " ";
	}

	sto.checkOutMember("AD834");
	for (std::string str : cust.getCart())
	{
		std::cout << str << " ";
	}
	std::cout << "Dan" << std::endl;
	sto.addProductToMemberCart("1234", "dsufy32");
	sto.addProductToMemberCart("1234", "dsufy32");
	sto.addProductToMemberCart("4569", "dsufy32");
	sto.checkOutMember("dsufy32");

	std::cout << "---------------------------------------------------\n";

	for (Product* product : sto.inventory)
	{
		std::cout << product->getIdCode() << " " << product->getTitle() << " " << product->getDescription() << std::endl;
	}

	std::cout << "---------------------------------------------------\n";
	sto.productSearch("b3ans");
	std::cout << "---------------------------------------------------\n";

	for (Product* product : sto.inventory)
	{
		std::cout << product->getIdCode() << " " << product->getTitle() << " " << product->getDescription() << std::endl;
	}

	return 0;
}