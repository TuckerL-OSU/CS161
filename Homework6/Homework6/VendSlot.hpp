#pragma once
#ifndef VENDSLOT_HPP
#define VENDSLOT_HPP
#include "Snack.hpp"

class VendSlot
{
private:
	Snack slotSnack;
	int slotAmount;

public:
	VendSlot();
	VendSlot(Snack, int);
	Snack getSnack();
	int getAmount();
	void decrementAmount();
};

#endif