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
enum SlotState 
{
	PLAYER_X = 'X',
	PLAYER_O = 'O',
	UNPLAYED = '.'
};

class Board
{
private:
	SlotState gameBoard[3][3];
	bool checkWin(SlotState);
	bool isFull();
	
public:
	Board();
	bool makeMove(int, int, SlotState);
	GameState gameState();
	void print();
};

#endif