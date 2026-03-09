#include<iostream>
#include<string>
#include <cctype>
#include<unordered_map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	string name;
	unordered_map <int, string> pedia1;
	unordered_map <string, int> pedia2;
	for (int i = 0; i < n; i++)
	{
		cin >> name;
		pedia1[i + 1] =  name;
		pedia2[name] = i + 1;
	}
		

	string question;
	for (int i = 0; i < m; i++)
	{
		bool probe = true;
		cin >> question;
		for (char c : question)
		{
			if (!isdigit(c))
			{
				probe = false;
				break;
			}
		}
		if (probe)
		{
			cout << pedia1[stoi(question)] << "\n";
		}
		else
		{
			cout << pedia2[question] << "\n";
		}
	}
	return 0;
}