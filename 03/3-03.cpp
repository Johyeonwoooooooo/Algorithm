#include<iostream>
using namespace std;

int main()
{
	int n;
	while (true)
	{
		cin >> n;
		if (1 <= n && n <= 10000)
			break;
	}
	int result = 0;
	for (int i = 1; i <= n; i++)
		result += i;
	cout << result << endl;
	return 0;
}