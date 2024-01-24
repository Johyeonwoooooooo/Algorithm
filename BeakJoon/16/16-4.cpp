#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
	string s;
	while (true)
	{
		getline(cin, s);
		if (s == ".")
			break;

		bool probe = true;

		if (s != "")
		{
			if (s[s.length() - 1] != '.')
				probe = false;

			stack<char> stack;

			for (char a : s)
			{
				if (a == '(' || a == '[')
					stack.push(a);
				else if (a == ')')
				{
					if (stack.size() == 0 || stack.top() != '(')
						probe = false;
					else
						stack.pop();

				}
				else if (a == ']')
				{
					if (stack.size() == 0 || stack.top() != '[')
						probe = false;
					else
						stack.pop();
				}
			}
			if (stack.size() != 0)
				probe = false;
		}
		
		if (s == "")
			probe = false;

		if (probe)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}