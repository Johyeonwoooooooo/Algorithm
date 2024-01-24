#include<iostream>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	int result = 1;

	for (int i = k + 1; i <= n; i++)
		result *= i;

	for (int i = 1; i <= n - k; i++)
		result /= i;

	cout << result << "\n";
	return 0;
}