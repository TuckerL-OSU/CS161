/*****************************************************************************
* Tucker Lavell
* 5/9/2017
* CS161 Spring 2017
* Assignment 6: Vending Machine. This program will take users input to a
	vending machine and "vend" the selection. It will track inventory value,
	inventory quantities, and information about the snack.
*****************************************************************************/
#include "VendSlot.hpp"

// default constructor
VendSlot::VendSlot()
{
	// default constructor for a snack
	slotSnack = Snack();
	slotAmount = 5;
}

// constructor for a vendslot, which takes a snack type and an amount
VendSlot::VendSlot(Snack snack, int amount)
{
	slotSnack = snack;
	slotAmount = amount;
}

// getters for the Snack info and the amount in the slot
Snack VendSlot::getSnack()
{
	return slotSnack;
}

int VendSlot::getAmount()
{
	return slotAmount;
}

// decreases the number in amount when an item is bought.
void VendSlot::decrementAmount()
{
	slotAmount--;
}