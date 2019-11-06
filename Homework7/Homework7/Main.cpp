#include <iostream>
#include "Person.hpp"
using namespace std;
double findMedian(int arrayNumbers[], int arraySize);
double findMean(Person[], int);
double stdDev(Person[], int);

int main()
{
	cout << "Medians" << endl;
	int odd[7] = { 4, 23, 14, 6, 1, 19, 23 };
	cout << findMedian(odd, 7) <<  endl;

	int nums[6] = { 4, 23, 14, 6, 1 ,19 };
	cout << findMedian(nums, 6) << endl;

	int one[1] = { 5 };
	cout << findMedian(one, 1) << endl;

	int two[2] = { 1, 2 };
	cout << findMedian(two, 2) << endl;

	cout << "Mean" << endl;
	Person mean[3] = { Person("Jack", 1), Person("Tucker", 2), Person("Dan", 3) };
	cout << findMean(mean, 3) << endl;

	cout << "Std Dev" << endl;
	Person std[3] = { Person("Jack", 1), Person("Tucker", 2), Person("Dan", 3) };
	cout << stdDev(std, 3) << endl;

	return 0;
}