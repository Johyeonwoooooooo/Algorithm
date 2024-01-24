#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	bool a = true;

	int index = s.length() / 2;
	for (int i = 0; i < index; i++)
	{
		if (s[i] != s[s.length() - 1 - i])
			a = false;
	}

	if (a == true)
		cout << "1" << endl;
	else
		cout << "0" << endl;

	return 0;
}