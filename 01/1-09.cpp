#include<iostream>
using namespace std;

int main()
{
	int A, B, C;
	while (true)
	{
		cin >> A >> B >> C;
		if (A > 0 && A < 10001 && B > 0 && B < 10001 && 0 < C && C < 10001)
			break;
	}
	cout << (A + B) % C << endl;
	cout << ((A % C) + (B % C)) % C << endl;
	cout << (A*B) % C << endl;
	cout << ((A % C) * (B % C)) % C << endl;
	return 0;
}