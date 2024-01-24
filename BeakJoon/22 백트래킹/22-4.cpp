#include<iostream>
using namespace std;

int n, m;
int arr[9] = { 0, };
int visit[9] = { 0, };

void DFS(int start, int depth)
{
	if (depth == m)
	{
		for (int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << "\n";
		
		for (int i = 0; i < 9; i++)
			visit[i] = 0;

		return;
	}

	for (int i = start; i <= n; i++)
	{
		if (visit[i] != m)
		{
			visit[i]++;
			arr[depth] = i;
			DFS(i, depth + 1);
		}
	}
}
int main()
{
	cin >> n >> m;
	DFS(1, 0);
	return 0;
}