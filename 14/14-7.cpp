#include<iostream>
#include<algorithm>
using namespace std;

bool BS(int* arr, int n, int key)
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
	int n,m;
	cin >> n >> m;
	int cnt = n+m;

	int* arr1 = new int[n];
	int* arr2 = new int[m];

	for (int i = 0; i < n; i++)
		cin >> arr1[i];

	for (int i = 0; i < m; i++)
		cin >> arr2[i];

	sort(arr1, arr1 + n);
	sort(arr2, arr2 + m);

	for (int i = 0; i < n; i++)
	{
		if (BS(arr2, m, arr1[i]))
			cnt--;
	}

	for (int i = 0; i < m; i++)
	{
		if (BS(arr1, n, arr2[i]))
			cnt--;
	}

	cout << cnt << "\n";
	return 0;
}