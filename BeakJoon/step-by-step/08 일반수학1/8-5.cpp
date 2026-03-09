#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int limit = 1;
	int method = 1;

	while (true)
	{
		if (n <= limit)
			break;

		limit += 6 * method;
		method++;
	}

	cout << method << endl;
	return 0;
}