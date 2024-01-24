#include<iostream>
using namespace std;

int n, m;
int arr[9] = { 0, };
int visit[9] = { 0, };

void DFS(int depth)
{
	if (depth == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
		for (int i = 0; i < 9; i++)
			visit[i] = 0;
		return;
	}

	for (int i = 1; i <= n; i++)
	{
		if (visit[i] != m)
		{
			visit[i]++;
			arr[depth] = i;
			DFS(depth + 1);
		}
	}
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> n >> m;
	DFS(0);
	return 0;
}