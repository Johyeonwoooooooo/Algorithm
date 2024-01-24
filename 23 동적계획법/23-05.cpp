#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int dp_Arr[100000] = { 0, };
	int num_arr[100000] = { 0, };
	int result_max = -1000000000;
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num_arr[i];
		dp_Arr[i] = num_arr[i];
	}
	dp_Arr[0] = num_arr[0];
	result_max = dp_Arr[0];

	for (int i = 1; i < n; i++)
	{
		dp_Arr[i] = max(num_arr[i], dp_Arr[i - 1] + num_arr[i]);
		if (dp_Arr[i] > result_max)
		{
			result_max = dp_Arr[i];
		}
	}
	cout << result_max << "\n";
	return 0;
}