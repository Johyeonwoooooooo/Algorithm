#include<iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 1; i <= T; i++)
	{
		int A, B;
		while (true)
		{
			cin >> A >> B;
			if (0 < A && A < 10 && 0 < B && B < 10)
				break;
		}
		cout << "Case #" << i << ": " << A <<" + " << B <<" = " << A+B << endl;
	}
	return 0;
}