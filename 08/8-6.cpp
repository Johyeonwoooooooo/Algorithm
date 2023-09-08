#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int cnt = 1;
	int n_step = 0;
	int n_index = 0;
	while (n > 0)
	{
		n_step++;
		n_index = n;
		n = n - cnt;
		cnt++;
	}

	if (n_step % 2 == 0)
	{
		int parent, child;
		parent = n_step;
		child = 1;
		for (int i = 1; i < n_index; i++)
		{
			parent--;
			child++;
		}
		cout << child << "/" << parent << endl;
	}
	else
	{
		int parent, child;
		parent = 1;
		child = n_step;
		for (int i = 1; i < n_index; i++)
		{
			parent++;
			child--;
		}
		cout << child << "/" << parent << endl;
	}
	return 0;
}