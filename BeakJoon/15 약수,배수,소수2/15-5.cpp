#include<iostream>
using namespace std;

bool checking_prime(long long n)
{
	for (long long i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}
		
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long n;
	cin >> n;
	for (long long i = 0; i < n; i++)
	{
		long long a;
		cin >> a;
		if (a <= 1)
			cout << 2 << "\n";
		else
		{
			while (!checking_prime(a))
			{
				a++;
			}
			cout << a << "\n";
		}
	}
	return 0;
}