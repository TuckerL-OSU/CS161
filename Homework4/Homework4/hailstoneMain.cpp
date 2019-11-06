#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

// prototype
int hailstone(int input);

int main()
{
	int input;
	// take in the time
	cin >> input;
	cout << "it took " << hailstone(input) << " attempts to reach 1." << endl;

	return 0;

}