#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int num;
	cin >> num;

	vector<int> num_arr;
	int avg = 0;
	int max = -4001;
	int min = 4001;
	int arr[8001] = { 0 };
	for (int i = 0; i < num; i++)
	{
		int k;
		cin >> k;
		arr[k + 4000]++;
		avg += k;
		if (k > max)
			max = k;

		if (k < min)
			min = k;

		num_arr.push_back(k);
	}

	cout << (int) round((double) avg / num) << "\n";

	sort(num_arr.begin(), num_arr.end());
	cout << num_arr[num / 2] << "\n";

	int cnt = 0;
	int max_cnt = 0;
	for (int i = 0; i < 8001; i++)
	{
		if (arr[i] > max_cnt)
		{
			max_cnt = arr[i];
			cnt = i;
		}
	}

	for (int i = cnt + 1; i < 8001; i++)
	{
		if (arr[i] == max_cnt)
		{
			cnt = i;
			break;
		}
	}

	cout << cnt - 4000 << "\n";

	cout << max - min << "\n";
}