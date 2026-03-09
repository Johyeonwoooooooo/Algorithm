#include<iostream>
using namespace std;

int main()
{
	int arr[100][100];
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
			arr[i][j] = 0;
	}
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int row, col;
		cin >> row >> col;
		for (int i = row; i < row+10; i++)
		{
			for (int j = col; j < col + 10; j++)
				arr[i][j] = 1;
		}
	}
	int cnt = 0;
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (arr[i][j] == 1)
				cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}