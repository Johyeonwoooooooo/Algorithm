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
	cout.precision(10);  // �Ҽ��� ���ڸ����� �������ִ� �Լ�
	cout << (double) A / B << endl;
	return 0;
}