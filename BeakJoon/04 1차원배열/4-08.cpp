#include<iostream>
using namespace std;

int main()
{
	int* arr = new int[10];
	int N;
	for (int i = 0; i < 10; i++)
	{
		cin >> N;
		arr[i] = N % 42;
	}
	int arr2[42];
	for (int i = 0; i < 42; i++)
		arr2[i] = i;

	int cnt = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 42; j++)
		{
			if (arr[i] == arr2[j])
			{
				if (arr2[j] != -1)
					cnt++;
				arr2[j] = -1;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}