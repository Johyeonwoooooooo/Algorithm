#include<iostream>
using namespace std;

int main()
{
	int x, y;
	while (true)
	{
		cin >> x >> y;
		if (-1000 <= x && x <= 1000 && -10000 <= y && y <= 1000 && x != 0 && y != 0)
			break;
	}
	if (x > 0 && y > 0)
		cout << "1" << endl;
	else if (x < 0 && y>0)
		cout << "2" << endl;
	else if (x < 0 && y < 0)
		cout << "3" << endl;
	else
		cout << "4" << endl;

	return 0;
}