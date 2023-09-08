#include<iostream>
using namespace std;

int main()
{
	int X;
	while (true)
	{
		cin >> X;
		if (1 <= X && X <= 1000000000)
			break;
	}
	int N;
	while (true)
	{
		cin >> N;
		if (1 <= N && N <= 100)
			break;
	}
	 
	int result = 0;
	for (int i = 0; i < N; i++)
	{
		int a,b;
		cin >> a >> b;
		result += a * b;
	}

	if (result == X)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}