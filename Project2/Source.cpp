#include <iostream>
using namespace std;

int main()
{
	int ArMax = 0;
	int ArMin = 0;
	int ArSum = 0;
	float Middle = 0;
	const int SIZE = 10;
	int a[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		a[i] = rand() % 20;
		cout << a[i];
		cout << '\n';
		if (a[i] > ArMax) {
			ArMax = a[i];
		}
		if (a[i] < ArMin) {
			ArMin = a[i];
		}
		ArSum = ArSum + a[i];		
	}
	Middle = ArSum / SIZE;

	cout << "the biggest number = " << ArMax;
	cout << '\n';
	cout << "the smaller number = " << ArMin;
	cout << '\n';
	cout << "the sum = " << ArSum;
	cout << '\n';
	cout << "Middle = " << Middle;

	return 0;
}