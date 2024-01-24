#include<iostream>
#include<string>
using namespace std;

int main()
{
	char arr[5][15];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 15; j++)
			arr[i][j] =  ' ';
	}
	string s;
	int max_length = 1;
	for (int i = 0; i < 5; i++)
	{
		getline(cin, s);
		for (int j = 0; j < s.length(); j++)
		{
			arr[i][j] = s[j];
		}
		if (max_length < s.length())
			max_length = s.length();
	}

	for (int j = 0; j < max_length; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			if (arr[i][j] != ' ')
				cout << arr[i][j];
		}
	}
	return 0;
}