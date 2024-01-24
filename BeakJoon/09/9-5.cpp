#include<iostream>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	int sum = 0;
	int min = -1;
	
	for (int i = N; i <= M; i++)
	{
		bool probe = true;
		if (i != 1)
		{
			for (int j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					probe = false;
					break;
				}
			}
			if (probe)
			{
				sum += i;
				if (min == -1)
					min = i;
			}
		}
	}
	if (sum != 0)
		cout << sum << endl << min << endl;
	else
		cout << min << endl;

	return 0;
}