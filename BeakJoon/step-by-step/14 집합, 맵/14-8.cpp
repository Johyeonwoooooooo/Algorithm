#include<iostream>
#include<string>
#include<algorithm>
#include<unordered_map>
using namespace std;

int main()
{
	string s;
	cin >> s;

	unordered_map <string, int> arr;
	for (int i = 0; i < s.length(); i++)
	{
		int cnt = 0;
		for (int j = s.length() - 1 - i; j >= 0; j--)
		{
			arr[s.substr(cnt,i+1)] = 0;
			cnt++;
		}
	}
	cout << arr.size() << "\n";
	return 0;
}