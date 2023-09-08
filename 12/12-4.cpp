#include<iostream>
#include<string>
#include<cmath>
using namespace std;

char BW_arr[8][8] = { 'B','W','B','W','B','W','B','W',
					  'W','B','W','B','W','B','W', 'B',
				   	'B','W','B','W','B','W','B','W',
					  'W','B','W','B','W','B','W', 'B',
					'B','W','B','W','B','W','B','W',
					  'W','B','W','B','W','B','W', 'B',
	                 'B','W','B','W','B','W','B','W',
					  'W','B','W','B','W','B','W', 'B',
};

char WB_arr[8][8] = { 'W','B','W','B','W','B','W', 'B',
					   'B','W','B','W','B','W','B','W',
						'W','B','W','B','W','B','W', 'B',
					   'B','W','B','W','B','W','B','W',
						'W','B','W','B','W','B','W', 'B',
					   'B','W','B','W','B','W','B','W',
						'W','B','W','B','W','B','W', 'B',
					   'B','W','B','W','B','W','B','W',
};

int BW_cnt(char** arr, int row, int col)
{
	int cnt = 0;
	

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (arr[i + row][j + col] != BW_arr[i][j])
				cnt++;
		}
	}
	return cnt;
}

int WB_cnt(char** arr, int row, int col)
{
	int cnt = 0;


	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (arr[i + row][j + col] != WB_arr[i][j])
				cnt++;
		}
	}
	return cnt;
}

int main()
{
	char** arr;
	int n, m;
	cin >> n >> m;

	arr = new char* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new char[m];
 	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];
	}

	int fixing = 63;	
	for (int i = 0; i <= n - 8; i++)
	{
		for (int j = 0; j <= m - 8; j++)
		{
			if (min(BW_cnt(arr, i, j), WB_cnt(arr, i, j)) < fixing)
				fixing = min(BW_cnt(arr, i, j), WB_cnt(arr, i, j));
		}
	}
	cout << fixing << endl;
	return 0;
}