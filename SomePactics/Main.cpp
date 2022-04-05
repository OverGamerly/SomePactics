#include <iostream>

using namespace std;

int main()
{
	int number;
	int count = 5;

	cout << "Enter your number: ";
	cin >> number;

	while (number != 0)
	{
		cout << count << " numb: " << number % 10 << endl;
		
		count--;

		number /= 10;
	}

	return 0;
}