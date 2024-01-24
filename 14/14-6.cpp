#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

bool BS(string* arr, int n, string key)
{
	int low = 0;
	int high = n - 1;
	bool found = false;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (arr[mid] == key)
		{
			found = true;
			break;
		}
		else if (arr[mid] > key)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return found;
}
int main()
{
	int n, m;
	cin >> n >> m;
	string* not_heard = new string[n];
	string* not_sean = new string[m];

	for (int i = 0; i < n; i++)
		cin >> not_heard[i];

	for (int i = 0; i < m; i++)
		cin >> not_sean[i];

	int cnt = 0;
	sort(not_heard, not_heard + n);
	sort(not_sean, not_sean + m);

	if (n > m)
	{
		string* arr = new string[m];
		for (int i = 0; i < m; i++)
		{
			if (BS(not_heard, n, not_sean[i]))
			{
				arr[cnt] = not_sean[i];
				cnt++;
			}
		}
		cout << cnt << "\n";
		for (int i = 0; i <= cnt; i++)
			cout << arr[i] << "\n";
	}
	else
	{
		string* arr = new string[n];
		for (int i = 0; i < n; i++)
		{
			if (BS(not_sean, m, not_heard[i]))
			{
				arr[cnt] = not_heard[i];
				cnt++;
			}
		}
		cout << cnt << "\n";
		for (int i = 0; i <= cnt; i++)
			cout << arr[i] << "\n";
	}
	return 0;
}