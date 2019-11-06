/******************************************************************************
* Tucker Lavell
* 5/29/2017
* CS161 Spring 2017
* Assignment 9: TicTacToe. Board class header file
******************************************************************************/
#pragma once
#ifndef BOARD_HPP
#define BOARD_HPP

enum GameState
{
	X_WON,
	O_WON,
	DRAW,
	UNFINISHED
};

// more friendly to manipulate throughout
enum SlotState
{
	PLAYER_X = 'x',
	PLAYER_O = 'o',
	UNPLAYED = '.'
};

class Board
{
private:
	SlotState gameBoard[3][3];
	bool checkWin(SlotState);
	// used by board only
	bool isFull();

public:
	Board();
	bool makeMove(int, int, SlotState);
	GameState gameState();
	void print();
};

#endif