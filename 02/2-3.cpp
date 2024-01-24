#include<iostream>
using namespace std;

int main()
{
	int year;
	while (true)
	{
		cin >> year;
		if (1 <= year && year <= 4000)
			break;
	}

	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
		cout << "1" << endl;
	else
		cout << "0" << endl;

	return 0;
}