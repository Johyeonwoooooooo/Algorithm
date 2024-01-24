	#include<iostream>
	using namespace std;

	int main()
	{
		long long a, b, c, d, e, f;
		cin >> a >> b >> c >> d >> e >> f;

		long long x, y;

		x = (c * e - b * f) / (a * e - b * d);
		y = (c * d - a * f) / (b * d - a * e);

		cout << x << " " << y << endl;
		return 0;
	}