#include<iostream>
using namespace std;

int main()
{
	int n;
	while (true)
	{
		cin >> n;
		if (n == -1)
			break;
		int* arr = new int[n];
		int divisor_num = 0;
		int result = 0;
		for (int i =  1; i < n; i++)
		{
			if (n % i == 0)
			{
				arr[divisor_num] = i;
				divisor_num++;
				result += i;
			}
		}
		if (result == n)
		{
			cout << n << " = " << arr[0];
			for (int i = 1; i < divisor_num; i++)
				cout << " + " << arr[i];
			cout << endl;
		}
		else
			cout << n << " is NOT perfect." << endl;
	}
	return 0;
}