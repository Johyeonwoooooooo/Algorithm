#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int min = 10000001;
	int max = 1;

	int num;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (num > max)
			max = num;

		if (num < min)
			min = num;
	}

	cout << min * max << "\n";
	return 0;
}