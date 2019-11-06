/******************************************************************************
* Tucker Lavell
* 5/29/2017
* CS161 Spring 2017
* Assignment 9: TicTacToe. TicTacToe class header file
******************************************************************************/
#pragma once
#include "Board.hpp"

#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP

class TicTacToe
{
private:
	Board gameBoard;
	SlotState turn;
	// functions used by tic tac toe only
	bool isValid(char, char);
	void getUserInput();
	void swapTurn();
	void printWinner();

public:
	TicTacToe(char);
	void play();
};

#endif