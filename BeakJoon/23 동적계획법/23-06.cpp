#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	int cost_arr[1000][3] = { 0, };
	cost_arr[0][0] = cost_arr[0][1] = cost_arr[0][2] = 0;

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			int cost;
			cin >> cost;
			cost_arr[i][j] = min(cost_arr[i - 1][(j + 1) % 3], cost_arr[i - 1][(j + 2) % 3]) + cost;
		}
	}
	cout << min({ cost_arr[n][0],cost_arr[n][1],cost_arr[n][2] }) << "\n";

	return 0;
}