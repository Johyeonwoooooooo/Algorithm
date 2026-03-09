#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int x_min = 10001 , x_max = -10001;
	int y_min = 10001 , y_max = -10001;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;

		if (x < x_min)
			x_min = x;
		if (x_max < x)
			x_max = x;
		if (y < y_min)
			y_min = y;
		if (y_max < y)
			y_max = y;
	}
	cout << (x_max - x_min) * (y_max - y_min) << endl;
	return 0;
}