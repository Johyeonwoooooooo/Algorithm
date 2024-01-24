#include<iostream>
using namespace std;

int main()
{
	int n;
	while (true)
	{
		cin >> n;
		if (1 <= n && n <= 9)
			break;
	}
	for (int i = 1; i < 10; i++)
		cout << n << " * " << i << " = " << n * i << endl;
	return 0;
}