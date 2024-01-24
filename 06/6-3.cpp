#include<iostream>
using namespace std;

int main()
{
	int num;
	while (true)
	{
		cin >> num;
		if (1 <= num && num <= 100)
			break;
	}
	for (int i = 1; i <= num; i++)
	{
		for (int j = 0; j < num - i; j++)
			cout << " ";
		for (int k = 0; k < 2 * i - 1; k++)
			cout << "*";
		cout << endl;
	}

	for (int i = num - 1; i > 0; i--)
	{
		for (int j = num - i; j > 0; j--)
			cout << " ";
		for (int k = 2 * i - 1; k > 0; k--)
			cout << "*";
		cout << endl;
	}
}