#include<iostream>
using namespace std;

int main()
{
	int A, B;
	while (true)
	{
		cin >> A >> B;
		if (-10000 <= A && A <= 10000 && -10000 <= B && B <= 10000)
			break;
	}

	if (A > B)
		cout << ">" << endl;
	else if (A < B)
		cout << "<" << endl;
	else
		cout << "==" << endl;

	return 0;
}