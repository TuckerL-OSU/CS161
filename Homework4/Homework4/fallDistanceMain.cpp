#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

// prototype
double fallDistance(double t);

int main()
{
	double t;
	// take in the time
	cin >> t;
	cout << "It fell: " << fallDistance(t) << endl;

	return 0;

}