#include<iostream>
using namespace std;

int main()
{
	int A, B;
	while (true)
	{
		cin >> A >> B;
		if (A > 0 && A < 10 && B > 0 && B < 10)
			break;
	}
	cout.precision(10);  // 소수점 몇자리까지 지정해주는 함수
	cout << (double) A / B << endl;
	return 0;
}