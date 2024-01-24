#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cin.ignore();
	string command;
	int enter_count = 0;
	unordered_map<string, int> arr;
	int hello = 0;
	for (int i = 0; i < n; i++)
	{
		getline(cin, command);
		if (command != "ENTER")
		{
			if (arr.find(command) == arr.end())
				arr[command] = 1;
			else if(arr[command] < enter_count)
				arr[command] ++;
		}
		else
			enter_count++;
	}

	for (auto it : arr)
	{
		hello += it.second;
	}

	cout << hello << "\n";
	return 0;
}