#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n, m;
	cin >> n;
	int* arr1 = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}

	cin >> m;
	int* arr2 = new int[m];
	for (int i = 0; i < m; i++)
		cin >> arr2[i];

	sort(arr1, arr1 + n);
	int cnt;

	for (int i = 0; i < m; i++)
	{
		cnt = upper_bound(arr1,arr1+n,arr2[i]) - lower_bound(arr1,arr1+n,arr2[i]);
		cout << cnt << " ";
	}
	return 0;
}