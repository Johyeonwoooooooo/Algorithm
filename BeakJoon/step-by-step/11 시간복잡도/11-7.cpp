#include<iostream>
using namespace std;

int main()
{
	int a0, a1;
	int n0, c;
	cin >> a1 >> a0;
	cin >> c >> n0;

	if (a1 * n0 + a0 <= c * n0 && a1 <= c)
		cout << "1" << endl;
	else
		cout << "0" << endl;

	return 0;

}