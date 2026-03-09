#include<iostream>
using namespace std;

int main()
{
	int year;

	while (true)
	{
		cin >> year;
		if (1000 <= year && year <= 3000)
			break;
	}
	cout << year - 543 << endl;
	return 0;
}