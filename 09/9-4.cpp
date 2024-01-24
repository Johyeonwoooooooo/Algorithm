#include<iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int cnt = N;
	for (int i = 0; i < N; i++)
	{
		int k;
		cin >> k;
		if (k > 1)
		{
			for (int i = 2; i < k; i++)
			{
				if (k % i == 0)
				{
					cnt--;
					break;
				}
			}
		}
		else
			cnt--;
	}
	cout << cnt << endl;
	return 0;
}