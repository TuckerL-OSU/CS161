/*****************************************************************************
* Tucker Lavell
* 4/19/2017
* CS161 Spring 2017
* Assignment 3c: Number Guesser. This program will take an input of a
	number from the user. It will store that number then ask the user to start
	randomly guessing numbers. It will then tell the user if the number they
	guessed is too high or too low. If they get it right it will tell them
	they are correct and tell them the number of attempts it took.
*****************************************************************************/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	// the number that the user will input
	int magicNumber;
	// number of guesses it takes the user
	int numbOfGuesses = 0;
	// what the current guess is
	int currentGuess;

	cout << "Enter the number for the player to guess." << endl;
	cin >> magicNumber;

	cout << "Enter your guess." << endl;
	// asks for the users guess, increments number of guesses, then checks
	// if the guess is too high or too low. As long as the guess is not correct
	// the loop will continue to make the user guess, while telling them
	// too high or low. When the user guesses correctly, the loop will exit
	// and it will print to the user how many guesses it took to get it correct
	do
	{
		// takes in the users current guess
		cin >> currentGuess;
		// will incremint everytime the user enters a value.
		numbOfGuesses++;

		// checks if the guessed number is lower
		// if its too low
		if (currentGuess < magicNumber)
			cout << "Too low - try again." << endl;
		// otherwise it checks if the guessed number is higher
		else
			cout << "Too high - try again." << endl; 
	} 
	// loop continues as long as the current guess is not the correct number
	while (currentGuess != magicNumber);

	// prints how many guess it took the user to get the answer
	cout << "You guessed it in " << numbOfGuesses << " tries." << endl;

	return 0;
}