#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	int count = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'c')
		{
			count++;
			if(s[i+1] == '=' || s[i+1] == '-')
				i++;
		}
		else if (s[i] == 'd')
		{
			count++;
			if (s[i + 1] == '-')
				i++;
			else if (s[i + 1] == 'z' && s[i + 2] == '=')
				i += 2;
		}
		else if (s[i] == 'l')
		{
			count++;
			if (s[i + 1] == 'j')
				i++;
		}
		else if (s[i] == 'n')
		{
			count++;
			if (s[i + 1] == 'j')
				i++;
		}
		else if (s[i] == 's')
		{
			count++;
			if (s[i + 1] == '=')
				i++;
		}
		else if(s[i] == 'z')
		{
			count++;
			if (s[i + 1] == '=')
				i++;
		}
		else
			count++;
	}
	cout << count << endl;
	return 0;
}