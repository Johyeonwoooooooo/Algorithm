#include<iostream>
#include<string>
using namespace std;

static int num = 0;

int Palindrome(string& s, int l, int r)
{
	if (l >= r)
	{
		num++;
		return 1;
	}
	else if (s[l] != s[r])
	{
		num++;
		return 0;
	}
	else
	{
		num++;
		return Palindrome(s,l + 1, r - 1);
	}
}
int main()
{
	cout.tie(NULL);
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		cout << Palindrome(s, 0, s.length() - 1) << " " << num << "\n";
		num = 0;
	}
}