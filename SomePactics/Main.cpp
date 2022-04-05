#include "MainHead.h"

int main()
{
	int* number = new int;
	int count = 5;

	cout << "Enter your number: ";
	cin >> *number;

	while (*number != 0)
	{
		cout << count << " numb: " << *number % 10 << endl;
		
		count--;

		*number /= 10;
	}

	delete number;

	return 0;
}