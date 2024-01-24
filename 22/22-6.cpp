#include<iostream>
#include<vector>
using namespace std;

int n;
int arr[9][9];
vector<pair<int, int>> position;

bool checking_row(int row,int value)
{
	bool result = true;
	for (int i = 0; i < 9; i++)
	{
		if (arr[row][i] == value)
		{
			result = false;
			break;
		}
	}
	return result;
}

bool checking_col(int col, int value)
{
	bool result = true;
	for (int i = 0; i < 9; i++)
	{
		if (arr[i][col] == value)
		{
			result = false;
			break;
		}
	}
	return result;
}

bool checking_square(int row,int col, int value)
{
	int c_row = (row / 3) * 3;
	int c_col = (col / 3) * 3;
	bool result = true;

	for (int i = c_row; i < c_row + 3; i++)
	{
		for (int j = c_col; j < c_col + 3; j++)
		{
			if (arr[i][j] == value)
			{
				result = false;
				break;
			}
		}
	}
	return result;
}
void Sudoku_DFS(int depth)
{
	if (depth == n)
	{
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				cout << arr[i][j] << " ";
			}
			cout << "\n";
		}
		exit(0);
	}
	else
	{
		int row = position[depth].first;
		int col = position[depth].second;
		for (int i = 1; i <= 9; i++)
		{
			if (checking_row(row, i) && checking_col(col, i) && checking_square(row,col,i))
			{
				arr[row][col] = i;	
				Sudoku_DFS(depth + 1);
				arr[row][col] = 0;
			}
		}
	}
}
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 0)
			{
				n++;
				position.push_back(make_pair(i, j));
			}
		}
	}
	cout << "\n \n";
	Sudoku_DFS(0);
	return 0;
}