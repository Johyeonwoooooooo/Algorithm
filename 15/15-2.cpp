#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long long int a, b;
	cin >> a >> b;
	long long int max_num = max(a, b);
	long long int min_num = min(a, b);
	long long int mod = a;
	while (mod != 0)
	{
		mod = max_num % min_num;
		if (mod != 0)
		{
			max_num = min_num;
			min_num = mod;
		}
	}
	cout << a * b / min_num << "\n";
	return 0;
}