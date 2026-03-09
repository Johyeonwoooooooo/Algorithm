#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long long A, B, C;
	long long limit = pow(10, 12);
	while (true)
	{
		cin >> A >> B >> C;
		if (1 <= A && A <= limit && 1 <= B && B <= limit && 1 <= C && C <= limit)
			break;
	}
	cout << A + B + C << endl;

	return 0;
}