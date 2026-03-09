#include<iostream>
using namespace std;

int main()
{
	int quarter;
	int dime;
	int nickel;
	int penny;
	quarter = dime = nickel = penny = 0;

	int arr[4] = { 0,0,0,0 };
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int money;
		cin >> money;
		quarter = money / 25;
		money %= 25;

		dime = money / 10;
		money %= 10;

		nickel = money / 5;
		money %= 5;

		penny = money;

		arr[0] = quarter;
		arr[1] = dime;
		arr[2] = nickel;
		arr[3] = penny;

		for (int i = 0; i < 4; i++)
			cout << arr[i] << " ";
		cout << endl;

	}
	return 0;
}