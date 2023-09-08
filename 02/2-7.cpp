#include<iostream>
using namespace std;

int main()
{
	int num1, num2, num3;
	while (true)
	{
		cin >> num1 >> num2 >> num3;
		if (1 <= num1 && num1 <= 6 && 1 <= num2 && num2 <= 6 && 1 <= num3 && num3 <= 6)
			break;
	}
	if (num1 == num2 && num1 == num3)
		cout << 10000 + num1 * 1000 << endl;
	else if (num1 != num2 && num1 != num3 && num2 != num3)
	{
		int max = num1;
		if (max < num2)
			max = num2;
		if (max < num3)
			max = num3;

		cout << 100 * max << endl;
	}
	else
	{
		int same = num1;
		if (same != num2 && same != num3)
			same = num2;

		cout << 1000 + 100 * same << endl; 
	}
	return 0;
}