#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// prototype
void smallSort(int &a, int &b, int &c);

int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	smallSort(a, b, c);
	cout << a << " " << b << " " << c << endl;

	return 0;

}
