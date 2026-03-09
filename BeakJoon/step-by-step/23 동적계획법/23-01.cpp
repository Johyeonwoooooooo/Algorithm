#include<iostream>
using namespace std;

int n;
int fibo_arr[41] = { 0, };
int recursion_num = 0;
int dp_num = 0;

int recursion_fibonacci(int n)
{
	if (n == 1 || n == 2)
	{
		recursion_num++;
		return 1;
	}
	else
	{
		return recursion_fibonacci(n - 2) + recursion_fibonacci(n - 1);
	}
}

int dp_fibonacci(int n)
{
	if (n <= 2)
	{
		dp_num++;
		fibo_arr[1] = 1;
		fibo_arr[2] = 1;
	}
	else
	{
		for (int i = 3; i <= n; i++)
		{
			fibo_arr[i] = fibo_arr[i - 2] + fibo_arr[i - 1];
			dp_num++;
		}
		return fibo_arr[n];
	}
}
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> n;
	
	recursion_fibonacci(n);
	dp_fibonacci(n);

	cout << recursion_num << " " << dp_num << "\n";
	return 0;
}