#include <iostream>
using namespace std;
void smallSort2(int*, int*, int*);
void repeatArray(double*&, int);

int main()
{
	cout << "small sort" << endl;
	int a = 0;
	int b = -547;
	int c = -6;
	smallSort2(&a, &b, &c);
	cout << a << ", " << b << ", " << c << endl;

	cout << "repeat array" << endl;
	cout << "inputs" << endl;
	double* myArray = new double[3];
	for (int i = 0; i < 3; i++)
	{
		myArray[i] = (i + 0.5) * 2;
		cout << myArray[i] << " ";
	}
	cout << endl;
	repeatArray(myArray, 3);
	
	cout << "main output" << endl;
	for (int i = 0; i<6; i++)
		cout << myArray[i] << endl;

	delete[]myArray;

	return 0;
}
