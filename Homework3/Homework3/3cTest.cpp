#include <iostream>
using namespace std;

int main() {

	int mysteryNumber = 0,
		guessCount = 0,
		guessNumber = 0;

	cout << "Enter the mystery number: ";
	cin >> mysteryNumber;

	do {
		cout << "Guess the mystery number: ";
		cin >> guessNumber;
		count++;

		if (guessNumber < mysteryNumber)
			cout << "Too Low!" << endl;
		else if (guessNumber > mysteryNumber)
			cout << "Too High!" << endl;
		else
			cout << "Corrent!" << endl;
	} while (guessNumber != mysteryNumber);

	cout << "It took " << guessCount << " attempt(s) to guess the mystery number!" << endl

		return 0;
}