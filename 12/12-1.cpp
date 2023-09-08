#include<iostream>
using namespace std;

int main()
{
	int n, goal_score;
	cin >> n >> goal_score;

	int* arr = new int[n];
	int deviation = goal_score;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int goal = 0;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			for (int k = j + 1; k <= n; k++)
			{
				int result;
				result = arr[i] + arr[j] + arr[k];
				if ((goal_score - result) >= 0 && (goal_score - result) < deviation)
				{
					deviation = goal_score - result;
					goal = result;
				}
			}
		}
	}

	cout << goal << endl;
	return 0;

}