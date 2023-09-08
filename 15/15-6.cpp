#include<iostream>
using namespace std;

bool checking_prime(int n)
{
	if (n <= 1)
		return false;
	else
	{
		for (long long i = 2; i * i <= n; i++)
		{
			if (n % i == 0)
				return false;
		}
		return true;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	cin >> n >> m;

	for (int i = n; i <= m; i++)
	{
		if (checking_prime(i))
			cout << i << "\n";
	}
	return 0;
}