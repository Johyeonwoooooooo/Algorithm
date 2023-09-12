#include<iostream>
using namespace std;

long long fibonacci_arr[101];
int num;

long long pibonacci_triangle(int num1)
{
	if (num1 <= 3)
	{
		return fibonacci_arr[num1];
	}
	else
	{
		for (int i = 4; i <= num1; i++)
		{
			fibonacci_arr[i] = fibonacci_arr[i - 2] + fibonacci_arr[i - 3];
		}
		return fibonacci_arr[num1];
	}
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	fibonacci_arr[1] = fibonacci_arr[2] = fibonacci_arr[3] = 1;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		cout << pibonacci_triangle(num) << "\n";
	}
	return 0;
}