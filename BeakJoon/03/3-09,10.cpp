#include<iostream>
using namespace std;

int main()
{
	int n;
	while (true)
	{
		cin >> n;
		if (1 <= n && n <= 100)
			break;
	}
	for (int i = 0; i < n; i++)
	{
		for (int k = 1; k < n - i; k++)
			cout << " ";
		for (int j = 0; j <= i; j++)
			cout << "*";
		cout << "\n";
	}
	return 0;
}