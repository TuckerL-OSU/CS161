/******************************************************************************
* Tucker Lavell
* 5/29/2017
* CS161 Spring 2017
* Assignment 9: TicTacToe. TicTacToe class - takes care of logic related to 
	playing the game ONLY. Here is where cout's and cin's are used to get user
	input. There is also input validation here.
******************************************************************************/
#include <iostream>
#include <locale> // for toupper (styling choice)
#include "TicTacToe.hpp"

// constructor, takes in who goes first
TicTacToe::TicTacToe(char whosFirst)
{
	switch (whosFirst)
	{
		// starts the game based on X going first
	case '1':
	case 'x':
	case 'X':
		turn = PLAYER_X;
		play();
		break;

		// starts the game based on O going first
	case '2':
	case 'o':
	case 'O':
		turn = PLAYER_O;
		play();
		break;

		// game doesnt start if not valid input
	default:
		std::cout << "That is not a valid player!" << std::endl; break;
	}
}

// lets play a game!
void TicTacToe::play()
{
	// do while loop tracks the games progress using GameState
	do
	{
		getUserInput();
		// successful moves print the gameboard here
		gameBoard.print();
		swapTurn();
	} while (gameBoard.gameState() == UNFINISHED);

	printWinner();
}

// gets user input and also does input validation
void TicTacToe::getUserInput()
{
	char row;
	char column;

	do
	{
		// cast turn to a char because it is an ascii value, toupper just cuz
		std::cout << "Player " << (char)toupper(turn) 
			<< ": please enter your move." << std::endl;
		std::cin >> row >> column;

		// checks to make sure the inputs are within the array
		if (isValid(row, column))
		{
			// using char math to get array indicies
			// check if the input move is valid, if not tell the user
			if (gameBoard.makeMove(row - '0', column - '0', turn) == false)
			{
				std::cout << "That square is already taken." << std::endl;
				gameBoard.print();
				getUserInput();
			}
		}
		else
		{
			std::cout << "Not a valid move!" << std::endl;
			gameBoard.print();
		}

	} while (!isValid(row, column) && !gameBoard.makeMove(row, column, turn));
}

// checking to make sure that the input is within the scope of the array
bool TicTacToe::isValid(char row, char column)
{
	// char math to make sure the inputs are actually inside the array
	return row - '0' < 3 && column - '0' < 3;
}

// used to alternate turns
void TicTacToe::swapTurn()
{
	if (turn == PLAYER_X)
		turn = PLAYER_O;
	else
		turn = PLAYER_X;
}

// winner print logic
void TicTacToe::printWinner()
{
	switch (gameBoard.gameState())
	{
	case X_WON:
		std::cout << "Player X wins!" << std::endl; break;
	case O_WON:
		std::cout << "Player O wins!" << std::endl; break;
	case DRAW:
		std::cout << "The game is a draw." << std::endl; break;
	default:
		break;
	}
}

int main()
{
	char firstTurn = ' ';
	std::cout << "Which player will go first(1. X or 2. O)?: ";
	std::cin >> firstTurn;

	// creating a tic tac toe object with the first turn set 
	TicTacToe ticTacToe(firstTurn);

	return 0;
}