#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int original;
	bool probe = false;

	for (int i = 0; i < n; i++)
	{
		original = i;
		int remain = original;
		int result = 0;

		if (probe)
			break;

		while (original != 0)
		{
			result += remain;
			remain = original % 10;
			original /= 10;
		}
		result += remain;
		if (result == n)
		{
			probe = true;
			cout << i << endl;
		}
	}
	if (!probe)
		cout << "0" << endl;

	return 0;
}