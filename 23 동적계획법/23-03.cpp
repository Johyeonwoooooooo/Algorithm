#include<iostream>
using namespace std;

int num;
int code_numArr[1000001] = { 0, };

int DP(int n)
{
	if (n <= 2)
	{
		return code_numArr[n];
	}
	else
	{
		for (int i = 3; i <= n; i++)
		{
			code_numArr[i] = (code_numArr[i - 1] + code_numArr[i - 2]) % 15746;
		}
		return code_numArr[n];
	}
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	code_numArr[1] = 1;
	code_numArr[2] = 2;

	cin >> num;
	cout << DP(num) << "\n";

	return 0;
}