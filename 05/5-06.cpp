#include<iostream>
#include<string>
using namespace std;

int main()
{
	int index_arr[26];
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	for (int i = 0; i < 26; i++)
		index_arr[i] = -1;
	string S;
	getline(cin, S);
	int length = S.length();
	for (int i = 0; i < S.length(); i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (alphabet[j] == S[i] && index_arr[j] == -1)
				index_arr[j] = i;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		cout << index_arr[i] << " ";
	}
	return 0;
}