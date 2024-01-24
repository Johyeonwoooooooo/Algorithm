#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool binary_search(string* arr, int n, string key)
{
	int start = 0;
	int end = n - 1;
	int mid;
	bool found = false;
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (arr[mid] == key)
		{
			found = true;
			return found;
		}
		else if (arr[mid] > key)
		{
			end = mid - 1;
		}
		else
			start = mid + 1;
	}
	return found;
}
int main()
{
	int n, m;
	cin >> n >> m;
	string* arr1 = new string[n]; // 정답 집합
	string* arr2 = new string[m]; // 검사할 문자열 집합

	int cnt = 0;
	for (int i = 0; i < n; i++) // 입력
		cin >> arr1[i];

	for (int i = 0; i < m; i++) // 입력	
		cin >> arr2[i];

	sort(arr1, arr1 + n);
	for (int i = 0; i < m; i++)
	{
		if (binary_search(arr1, n, arr2[i]))
			cnt++;
	}

	cout << cnt;
	return 0;
}