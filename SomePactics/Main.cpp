#include <iostream>
#include <string>

using namespace std;

int main()
{
	int countOfmath;
	double answer = 1 + 1;

	cout << "Enter count of 1 + 1:";
	cin >> countOfmath;

	for (int i = 1; i < countOfmath; i++)
	{
		answer = 1 + 1 / answer;
	}

	cout << answer << endl;

	return 0;
}