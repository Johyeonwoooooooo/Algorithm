#include<iostream>
#include<stack>
using namespace std;

int main()
{
	int n;
	cin >> n;

	stack<int> stack;
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		if (k != 0)
			stack.push(k);
		else
			stack.pop();
	}

	int result = 0;
	while(stack.size() != 0)
	{
		result += stack.top();
		stack.pop();
	}

	cout << result << "\n";
	return 0;
}