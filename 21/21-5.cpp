#include<iostream>
#include<cmath>
using namespace std;

void cantor(int n)
{
	if (n == 0)
	{
		cout << "-";
		return;
	}

	int k = pow(3, n-1);
	cantor(n - 1);
	for (int i = 0; i < k; i++)
	{
		cout << " ";
	}

	cantor(n - 1);
	
}
int main()
{
	int n;

	while (cin >> n)
	{
		cantor(n);
		cout << "\n";
	}

	return 0;
}