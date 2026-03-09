#include<iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	while (true)
	{
		cin >> n;
		if (1 <= n && n <= 1000000)
			break;
	}
	for (int i = 0; i < n; i++)
	{
		int A, B;
		while (true)
		{
			cin >> A >> B;
			if (1 <= A && A <= 1000 && 1 <= B && B <= 1000)
				break;
		}
		cout << A + B << "\n";
	}
	return 0;
}