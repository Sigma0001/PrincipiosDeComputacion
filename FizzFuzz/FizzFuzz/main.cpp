#include <iostream>
using namespace std;

void main()
{

	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
		cout << "FizzFuzz" << endl;
		}

		else if (i % 3 == 0)
		{
			cout << "Fizz" << endl;
		}

		else if(i % 5 == 0)
		{
			cout << "Fuzz" << endl;
		}

		else if (i % 3 == 0 && i % 5 == 0)
		{
			cout << "FizzFuzz" << endl;
		}

		else
		{
			cout << i << endl;
		}

	}

	system("pause");
} 