#include <iostream>
#include "Board.hpp"

Board::Board()
{
	gameBoard[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			gameBoard[i][j] = UNPLAYED;
		}
	}
}

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

GameState Board::gameState()
{
	if (checkWin(PLAYER_X))
	{
		std::cout << "x win" << std::endl;
		return X_WON;
	}
	if (checkWin(PLAYER_O))
	{
		std::cout << "o win" << std::endl;
		return O_WON;
	}
	if (isFull())
	{
		std::cout << "draw" << std::endl;
		return DRAW;
	}

	return UNFINISHED;
}
// checks if a winning series contains all the same player
bool Board::checkWin(SlotState player)
{
	for (int i = 0; i < 3; i++)
	{
		// horizontal win
		if (gameBoard[i][0] == gameBoard[i][1] && gameBoard[i][1] == gameBoard[i][2] && gameBoard[i][0] == player)
			return true;
		// vertical win
		if (gameBoard[0][i] == gameBoard[1][i] && gameBoard[1][i] == gameBoard[2][i] && gameBoard[0][i] == player)
			return true;
	}

	// diagonal win
	if (gameBoard[0][0] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][2] && gameBoard[1][1] == player)
		return true;
	else if (gameBoard[0][2] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][0] && gameBoard[1][1] == player)
		return true;

	return false;
}

// more efficient isFull
// track total number of moves made vs available slot
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
	std::cout << "   | 0 | 1 | 2 |" << std::endl
		<< "---+---+---+---+" << std::endl
		<< " 0 | " << (char)gameBoard[0][0] << " | " << (char)gameBoard[0][1] << " | " << (char)gameBoard[0][2] << " |" << std::endl
		<< "---+---+---+---+" << std::endl
		<< " 1 | " << (char)gameBoard[1][0] << " | " << (char)gameBoard[1][1] << " | " << (char)gameBoard[1][2] << " |" << std::endl
		<< "---+---+---+---+" << std::endl
		<< " 2 | " << (char)gameBoard[2][0] << " | " << (char)gameBoard[2][1] << " | " << (char)gameBoard[2][2] << " |" << std::endl
		<< "---+---+---+---+" << std::endl;
}

//int main()
//{
//	Board board;
//
//	board.print();
//
//	board.makeMove(0, 0, PLAYER_X);
//	board.makeMove(1, 2, PLAYER_O);
//	board.makeMove(2, 1, PLAYER_X);
//	board.makeMove(0, 2, PLAYER_O);
//	board.makeMove(2, 0, PLAYER_X);
//	board.makeMove(1, 1, PLAYER_O);
//
//	board.print();
//
//	return 0;
//}