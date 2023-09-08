#include<iostream>
using namespace std;

int arr[9] = { 0, };
bool visit[9] = { false, };
int n, m;

void DFS(int depth)
{
	if (depth == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 1; i <= n; i++)
	{
		if (!visit[i])
		{
			visit[i] = true;
			arr[depth] = i;
			DFS(depth + 1);
			visit[i] = false;
		}
	}
}
int main()
{
	cin >> n >> m;
	DFS(0);
	return 0;
}