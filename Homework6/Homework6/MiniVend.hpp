#pragma once
#ifndef MINIVEND_HPP
#define MINIVEND_HPP
#include "VendSlot.hpp"

class MiniVend
{
private:
	VendSlot vendSlot1;
	VendSlot vendSlot2;
	VendSlot vendSlot3;
	VendSlot vendSlot4;
	double vendMoney;
	void buySnackHandler(VendSlot&);

public:
	MiniVend(VendSlot, VendSlot, VendSlot, VendSlot, double);
	double getMoney();
	int numEmptySlots();
	double valueOfSnacks();
	void buySnack(int);
};

#endif