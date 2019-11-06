#include <iostream>
#include "TicTacToe.hpp"

int main()
{
	Board board;

	board.print();

	board.makeMove(0, 2, PLAYER_X);
	board.makeMove(1, 2, PLAYER_O);
	board.makeMove(1, 1, PLAYER_O);
	board.makeMove(2, 0, PLAYER_X);
	board.makeMove(2, 2, PLAYER_O);
	board.makeMove(2, 1, PLAYER_O);
	board.makeMove(0, 0, PLAYER_X);
	board.makeMove(0, 1, PLAYER_O);
	board.makeMove(1, 0, PLAYER_X);
	board.gameState();
	board.print();

	return 0;
}

//int main()
//{
//	// initilizing to blank incase no inputs, it ill still hit default case
//	char firstTurn = ' ';
//	std::cout << "Which player will go first(1. X or 2. O)?: ";
//	std::cin >> firstTurn;
//	// creating a tic tac toe object with the first turn set 
//	TicTacToe ticTacToe(firstTurn);
//
//	return 0;
//}

TicTacToe::TicTacToe(char whosFirst)
{
	switch (whosFirst)
	{
	case '1':
	case 'x':
	case 'X':
		turn = PLAYER_X;
		// starts the game based on X going first
		play(); 
		break;
	case '2':
	case 'o':
	case 'O':
		// starts the game based on O going first
		turn = PLAYER_O;
		play();
		break;
		// game doesnt start if not valid input
	default:
		std::cout << "That is not a valid player!" << std::endl; break;
	}
}

void TicTacToe::play()
{
	char row;
	char column;
	do
	{
		std::cout << "Player " << (char)turn << ": please enter your move."
			<< std::endl;
		std::cin >> row >> column;
		gameBoard.makeMove(row - '0', column - '0', turn);
		gameBoard.print();
		
		// used to alternate turns
		if (turn == PLAYER_X)
			turn = PLAYER_O;
		else
			turn = PLAYER_X;

	} while (gameBoard.gameState() == UNFINISHED);
}

// cin
// cout