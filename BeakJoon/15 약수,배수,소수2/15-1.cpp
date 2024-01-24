#include<iostream>
using namespace std;

int main()
{
	int n;
	int a, b;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		int min = 0;
		if (b > a)
		{
			for (int j = 1; j <= a; j++)
			{
				if (a % j == 0 && b % j == 0)
					min = j;
			}
		}
		else
		{
			for (int j = 1; j <= b; j++)
			{
				if (a % j == 0 && b % j == 0)
					min = j;
			}
		}
		cout << (a * b) / min << "\n";
	}
}