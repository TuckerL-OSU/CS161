#include <iostream>
#include "MiniVend.hpp"
using namespace std;

int main()
{
	Snack s1("corn chips", 0.75, 200);
	Snack s2("candy bar", 1.25, 300);
	Snack s3("root beer", 2.00, 450);

	VendSlot vs1(s1, 2);
	VendSlot vs2(s2, 1);
	VendSlot vs3(s3, 0);
	VendSlot vs4;  // five bottles of water

	MiniVend machine(vs1, vs2, vs3, vs4, 0);

	std::cout << machine.numEmptySlots() << std::endl;
	std::cout << machine.valueOfSnacks() << std::endl;
	std::cout << machine.getMoney() << std::endl;
	machine.buySnack(1);
	std::cout << machine.numEmptySlots() << std::endl;
	std::cout << machine.valueOfSnacks() << std::endl;
	std::cout << machine.getMoney() << std::endl;

	return 0;
}