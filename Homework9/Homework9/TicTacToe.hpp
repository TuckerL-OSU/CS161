#pragma once
#include "Board.hpp"

#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP

class TicTacToe
{
private:
	Board gameBoard;
	SlotState turn;

public:
	TicTacToe(char);
	void play();

};

#endif