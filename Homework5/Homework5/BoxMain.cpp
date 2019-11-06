#include <iostream>
#include "Box.hpp"
using namespace std;

int main()
{
	Box dan;
	Box tucker(2.4, 7.1, 5.0);

	double volume1 = dan.calcVolume();
	double surfaceArea1 = dan.calcSurfaceArea();
	double volume2 = tucker.calcVolume();
	double surfaceArea2 = tucker.calcSurfaceArea();

	cout << "Dan:\tVolume: " << volume1 << "\tSurface Area: " << surfaceArea1 << endl;
	cout << "Tucker:\tVolume: " << volume2 << "\tSurface Area: " << surfaceArea2 << endl;

	return 0;
}
