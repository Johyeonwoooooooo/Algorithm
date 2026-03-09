#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		string s;
		bool ok = true;
		getline(cin, s);

		stack <char> stack;
		for(int i =0; i<s.length(); i++)
		{
			if (s[i] == '(')
				stack.push('(');
			else if (s[i] == ')' && stack.size() != 0)
				stack.pop();
			else
				ok = false;
		}
		if (stack.size() != 0)
			ok = false;
		 
		if (ok)
			cout << "YES" << "\n";
		else
			cout << "NO \n";
	}
	return 0;
}