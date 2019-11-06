/*****************************************************************************
* Tucker Lavell
* 5/9/2017
* CS161 Spring 2017
* Assignment 6: Vending Machine. This program will take users input to a
	vending machine and "vend" the selection. It will track inventory value,
	inventory quantities, and information about the snack.
*****************************************************************************/
#include "MiniVend.hpp"

// constructor
MiniVend::MiniVend(VendSlot slot1, VendSlot slot2, VendSlot slot3,
	VendSlot slot4, double money)
{
	vendSlot1 = slot1;
	vendSlot2 = slot2;
	vendSlot3 = slot3;
	vendSlot4 = slot4;
	vendMoney = money;
}

// getter for the amount of money currently in the machine
double MiniVend::getMoney()
{
	return vendMoney;
}

// gets the number of empty slots left
int MiniVend::numEmptySlots()
{
	int numEmptySlots = 0;

	// checks if each slot has an amount left, if there is none it adds that
	// to the number of empty slots
	if (vendSlot1.getAmount() == 0)
		numEmptySlots++;
	if (vendSlot2.getAmount() == 0)
		numEmptySlots++;
	if (vendSlot3.getAmount() == 0)
		numEmptySlots++;
	if (vendSlot4.getAmount() == 0)
		numEmptySlots++;

	return numEmptySlots;
}

// gets the total value of the snacks left
double MiniVend::valueOfSnacks()
{
	return (vendSlot1.getSnack().getPrice() * vendSlot1.getAmount()) +
		(vendSlot2.getSnack().getPrice() * vendSlot2.getAmount()) +
		(vendSlot3.getSnack().getPrice() * vendSlot3.getAmount()) +
		(vendSlot4.getSnack().getPrice() * vendSlot4.getAmount());
}

// switch that reads the users selection on the machine
void MiniVend::buySnack(int selection)
{
	switch (selection)
	{
	case 0: buySnackHandler(vendSlot1); break;
	case 1: buySnackHandler(vendSlot2); break;
	case 2: buySnackHandler(vendSlot3); break;
	case 3: buySnackHandler(vendSlot4); break;
	default: break;
	}
}

// pass as reference so that the inventory amount is decremented properly
// lots of repeated code in the switch so using another function to perform
// the same thing once
void MiniVend::buySnackHandler(VendSlot& slot)
{
	if (slot.getAmount() > 0)
	{
		vendMoney += slot.getSnack().getPrice();
		slot.decrementAmount();
	}
}
