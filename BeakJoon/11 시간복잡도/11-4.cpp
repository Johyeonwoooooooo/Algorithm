#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	long long result = 0;
	for (int i = 1; i < n; i++)
		result += i;

	cout << result << endl << "2" << endl;
	return 0;
}