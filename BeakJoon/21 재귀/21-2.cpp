#include<iostream>
using namespace std;

long long int fibonacci(int n)
{
	if (n <= 1)
		return n;

	return fibonacci(n - 1) + fibonacci(n - 2);
 }
int main()
{
	int n;
	cin >> n;
	cout << fibonacci(n) << "\n";
	return 0;
}