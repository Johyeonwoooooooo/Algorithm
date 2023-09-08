#include<iostream>
#include<string>
using namespace std;

int main()
{
	int num;
	int count = 0;
	cin >> num;
	cin.ignore();
	string s;
	for (int j = 0; j < num; j++)
	{
		getline(cin, s);
		int arr[26];
		for (int i = 0; i < 26; i++)
			arr[i] = 0;

		char ch = s[0];
		for (int i = 0; i < s.length(); i++)
		{
			if (i == 0)
				arr[ch - 'a']++;
			else if (s[i - 1] != s[i])
			{
				ch = s[i];
				arr[ch - 'a']++;
			}
		}

		int probe = 1;
		for (int i = 0; i < 26; i++)
		{
			//cout << arr[i] << " ";
			if (arr[i] > 1)
				probe = 0;
		}
		if (probe == 1)
			count++;

	}
	cout << count << endl;
	return 0;
}