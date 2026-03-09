#include<iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		int n, m;
		cin >> n >> m;

		long long result = 1;
		int r = 1;
		
		for (int i = m; i > m - n; i--)
		{
			result *= i;
			result /= r++;
		}
		cout << result << "\n";
	}
}