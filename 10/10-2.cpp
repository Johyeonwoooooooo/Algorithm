#include<iostream>
using namespace std;

int main()
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	if (x > w - x)
		x = w - x;

	if (y > h - y)
		y = h - y;

	if (x > y)
		cout << y << endl;
	else
		cout << x << endl;

	return 0;
}