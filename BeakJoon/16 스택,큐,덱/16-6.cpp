#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	queue<int> q;
	int n; 
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		string command;
		cin >> command;
		cin.ignore();

		if (command == "push")
		{
			int a;
			cin >> a;
			q.push(a);
			cin.ignore();
		}
		else if (command == "pop")
		{
			if (q.size() == 0)
				cout << -1 << "\n";
			else
			{
				cout << q.front() << "\n";
				q.pop();
			}
		}
		else if (command == "size")
		{
			cout << q.size() << "\n";
		}
		else if (command == "empty")
		{
			if (q.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if (command == "front")
		{
			if (q.size() != 0)
				cout << q.front() << "\n";
			else
				cout << -1 << "\n";
		}
		else if (command == "back")
		{
			if (q.size() != 0)
				cout << q.back() << "\n";
			else
				cout << -1 << "\n";
		}
	}
	exit(0);
}