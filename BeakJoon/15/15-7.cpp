#include<iostream>
using namespace std;

bool checking_prime(int n)
{
	if (n <= 1)
		return false;
	else
	{
		for (int i = 2; i * i <= n; i++)
		{
			if (n % i == 0)
				return false;
		}
		return true;
	}
}

void Bertrand_postulate(int n)
{
	int cnt = 0;
	for (int i = n+1; i <= 2 * n; i++)
	{
		if (checking_prime(i))
			cnt++;
	}
	cout << cnt << "\n";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a = 1;
	while (a)
	{
		cin >> a;
		if (a != 0)
			Bertrand_postulate(a);
	}
	return 0;
}