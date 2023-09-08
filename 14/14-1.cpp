#include<iostream>
#include<algorithm>
using namespace std;

void binary_search_func(int arr[], int n, int k) // 이진 탐색
{
	int low = 0;
	int high = n - 1;

	while (low <= high) 
	{
		int mid = (low + high) / 2;
		if (arr[mid] == k) 
		{
			cout << "1" << " ";
			return;
		}
		else {
			if (arr[mid] > k) 
			{
				high = mid - 1;
			}
			else 
			{
				low = mid + 1;
			}
		}
	}
	cout << "0" << " ";
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n1, n2;
	cin >> n1;
	int* arr1 = new int[n1];

	for (int i = 0; i < n1; i++)
		cin >> arr1[i];

	cin >> n2;
	int* arr2 = new int[n2];
	for (int i = 0; i < n2; i++)
		cin >> arr2[i];

	sort(arr1, arr1+n1);  // arr1 정렬

	for (int i = 0; i < n2; i++)
	{
		binary_search_func(arr1, n1, arr2[i]);  // 이진탐색 후 출력
	}

	return 0;
}