#include<iostream>
using namespace std;

int n;
int* arr;
int oper[4] = { 0, };
int result_max = -1000000001;
int result_min = 1000000001;

void DFS(int depth,int result)
{
	if (depth == n)
	{
		if (result > result_max)
			result_max = result;
		
		if (result < result_min)
			result_min = result;
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (oper[i] != 0)
		{
			oper[i]--;
			if (i == 0)
			{
				DFS(depth + 1, result + arr[depth]);
			}
			else if (i == 1)
			{
				DFS(depth + 1, result - arr[depth]);
			}
			else if (i == 2)
			{
				DFS(depth + 1, result * arr[depth]);
			}
			else if (i == 3)
			{
				DFS(depth + 1, result / arr[depth]);
			}
			oper[i]++;
		}
	}
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> n;
	arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < 4; i++)
		cin >> oper[i];

	DFS(1,arr[0]);
	cout << result_max << "\n" << result_min << "\n";
	return 0;
}