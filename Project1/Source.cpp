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
		if (k == 10) { break; }
		i = i + 1;
	}

	cout << "\n\n";
	for (i = 0; i < 10; i++)
	{
		for (k = 0; k < 10; k++)
		{
			if ((i + k) % 2 == 0) cout << "#";
			else cout << "*";
		}
		cout << '\n';
	}


	cout << "\n\n";
	i = k = 0;
	char a = '#';
	while (k < 10)
	{
		if(i==0) cout << k << ") ";
		cout << a;
		if (a == '#') a = '*'; else a = '#';
		i++;
		if (i % 10 == 0)
		{
			if (a == '#') a = '*'; else a = '#';
			cout << '\n';
			k++;
			i = 0;
		}			
	}


	return 0;
}