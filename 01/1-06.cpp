#include<iostream>
using namespace std;

int main()
{
	int A, B;
	while (true)
	{
		cin >> A >> B;
		if (A > 0 && A < 10001 && B > 0 && B < 10001)
			break;
	}
	cout << A + B << endl;
	cout << A - B << endl;
	cout << A * B << endl;
	cout << A / B << endl;
	cout << A % B << endl;
	return 0;
}