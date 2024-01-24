#include<iostream>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	long long result = 0;

	for (long long i = 1; i < n - 1; i++)
	{
		result +=  i * (n-1-i);
	}

	cout << result << endl << "3" << endl;
	return 0;
}