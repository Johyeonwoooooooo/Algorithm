#include<iostream>
using namespace std;

int n, m;
int arr[9] = { 0, };
bool visit[9] = { false, };
void DFS(int start ,int depth)
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
	for (int i = start; i <= n; i++)
	{
		if (!visit[i])
		{
			visit[i] = true;
			arr[depth] = i;
			DFS(i+1,depth + 1);
			visit[i] = false;

		}
	}
}
int main()
{
	cin >> n >> m;
	DFS(1,0);
	return 0;
}