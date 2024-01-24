#include<iostream>
using namespace std;

int main()
{
	int arr[9][9];
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
			cin >> arr[i][j];
	}
	int max = arr[0][0];
	int max_row = 0;
	int max_col = 0;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
				max_row = i;
				max_col = j;
			}
		}
	}
	cout << max << endl;
	cout << max_row+1 << " " << max_col+1 << endl;
	return 0;
}