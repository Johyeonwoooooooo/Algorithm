#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int n;
int* arr;
int cnt = 0;

bool checking_diagonal(int index)
{
	bool result = true;
	for (int i = 0; i < index; i++)
	{
		if(arr[i] == arr[index] || arr[index] - index == arr[i]  - i || arr[index] + index == arr[i] + i)
			result = false;
	}
	return result;
}
void DFS(int depth)
{
	if (depth == n)
	{
		cnt++;
		return;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			arr[depth] = i;
			if (checking_diagonal(depth))
				DFS(depth + 1);
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
	DFS(0);
	cout << cnt << "\n";
	return 0;
}