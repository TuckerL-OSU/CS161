/******************************************************************************
* Tucker Lavell
* 5/29/2017
* CS161 Spring 2017
* Assignment 9: TicTacToe. Board class - takes care of logic related to the
	state of the board ONLY. The only cout's here are for print
******************************************************************************/
#include <iostream>
#include "Board.hpp"

// board constructor, populates a 3x3 array with "blank" spaces
Board::Board()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			gameBoard[i][j] = UNPLAYED;
		}
	}
}

// takes in the row and column of the user input, SlotState is the user whose
// turn it is currently (X,O)
bool Board::makeMove(int row, int col, SlotState move)
{
	// checking if that array slot is filled with a move or not
	// also don't want someone to place a "blank" spot
	if (gameBoard[row][col] == UNPLAYED && move != UNPLAYED)
	{
		gameBoard[row][col] = move;
		return true;
	}
	return false;
}

// checks the state of the current board
GameState Board::gameState()
{
	// checks if x or o won
	if (checkWin(PLAYER_X))
	{
		return X_WON;
	}
	if (checkWin(PLAYER_O))
	{
		return O_WON;
	}
	// if a winner was not found it checks if the array is "full"
	// if it is full with no winners, then it is a draw
	if (isFull())
	{
		return DRAW;
	}

	// there is no winner and the board is not full, then the game is not over
	return UNFINISHED;
}

// checks if a winning series contains all the same player
bool Board::checkWin(SlotState player)
{
	for (int i = 0; i < 3; i++)
	{
		// horizontal win
		if (gameBoard[i][0] == gameBoard[i][1] && 
			gameBoard[i][1] == gameBoard[i][2] && 
			gameBoard[i][0] == player)
			return true;
		// vertical win
		if (gameBoard[0][i] == gameBoard[1][i] && 
			gameBoard[1][i] == gameBoard[2][i] && 
			gameBoard[0][i] == player)
			return true;
	}

	// diagonal win
	if (gameBoard[0][0] == gameBoard[1][1] && 
		gameBoard[1][1] == gameBoard[2][2] && 
		gameBoard[1][1] == player)
		return true;
	else if (gameBoard[0][2] == gameBoard[1][1] && 
		gameBoard[1][1] == gameBoard[2][0] && 
		gameBoard[1][1] == player)
		return true;

	return false;
}

// loops through the board to see if there are any "empty" slots left
bool Board::isFull()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			// if any slot is found 
			if (gameBoard[i][j] == UNPLAYED)
				return false;
		}
	}
	// if we've gone through every slot, and we find none with UNPLAYED it full
	return true;
}

void Board::print()
{
	// need to print the character there not the ascii value
	// ugly but fits 80 char command line
	std::cout << "   | 0 | 1 | 2 |" << std::endl
		<< "---+---+---+---+" << std::endl
		<< " 0 | " << (char)gameBoard[0][0] << " | " << (char)gameBoard[0][1]
		<< " | " << (char)gameBoard[0][2] << " |" << std::endl
		<< "---+---+---+---+" << std::endl
		<< " 1 | " << (char)gameBoard[1][0] << " | " << (char)gameBoard[1][1] 
		<< " | " << (char)gameBoard[1][2] << " |" << std::endl
		<< "---+---+---+---+" << std::endl
		<< " 2 | " << (char)gameBoard[2][0] << " | " << (char)gameBoard[2][1] 
		<< " | " << (char)gameBoard[2][2] << " |" << std::endl
		<< "---+---+---+---+" << std::endl;
}