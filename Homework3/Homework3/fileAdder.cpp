/*****************************************************************************
* Tucker Lavell
* 4/19/2017
* CS161 Spring 2017
* Assignment 3b: File Adder. This program will take ask the user for the name
of a file. If the file name exists, the program will open the file, read
the list of integers (one int per line), then add the integers together,
and print the sum to an output file called "sum.txt"
*****************************************************************************/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	// input file stream object
	ifstream inputFile;
	// output file stream object
	ofstream outputFile;
	// name of the users desired file
	string fileName;
	// counter for the file reading loop
	int numValues;
	// current value read
	double current = 0.0;
	// runing total of the sum of the numbers found in the file
	double sum = 0.0;

	// asks the user to enter the name of the file they wish to read from
	cout << "Enter the name of the file you would like to read from: ";
	cin >> fileName;

	// open the user input file
	inputFile.open(fileName);

	// check if the file exists
	if (inputFile)
	{
		// if the file does exist loop through it summing the values then write
		// it to sum.txt
		while (inputFile >> current) // if a value was read keep looping
		{
			numValues++;
			sum += current;
		}
		// close the input file
		inputFile.close();

		// open sum.txt to write sum to
		outputFile.open("sum.txt");
		outputFile << sum;
		// close the output file
		outputFile.close();
	}
	else
		// if the file does not exist
		cout << "could not access file" << endl;

	return 0;
}