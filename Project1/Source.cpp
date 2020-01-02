#include <iostream>
using namespace std;

int main()

{
	int i = 1;
	int k = 0;

	while (true)
	{

		if ((i % 2 == 0)) {
			cout << "#";
		}
		else cout << "*";

		if (i == 10) { cout << '\n'; }


		if (i == 11) { i = 1; k = k + 1; }
		if (k == 10) { return 0; }
		i = i + 1;
	}


	return 0;
}