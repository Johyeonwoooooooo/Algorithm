#include<iostream>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	int cnt = 0;
	int ans = 665;
	while (true)
	{
		ans++;
		int result = ans;
		while (result >= 666)
		{
			if (result % 1000 == 666)
			{
				cnt++;
				break;
			}
			result /= 10;
		}
		if (cnt == n)
		{
			cout << ans << endl;
			break;
		}
	}
	return 0;
}