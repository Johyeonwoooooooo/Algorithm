#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int result = 4;
	int edge = 2;
	for (int i = 0; i < n; i++)
	{
		result += (edge -1 + pow(2,i)) * pow(2,i+1) + pow(4,i);
		          // ���� ���� ���� ��                // ���簢�� �߰��� ���� ���� ��
	}

	cout << result << endl;
	return 0;
}