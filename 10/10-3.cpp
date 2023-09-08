#include<iostream>
using namespace std;

int main()
{
	int x_edge1, x_edge2, x_edge3;
	int y_edge1, y_edge2, y_edge3;

	cin >> x_edge1 >> y_edge1;
	cin >> x_edge2 >> y_edge2;
	cin >> x_edge3 >> y_edge3;

	int x, y;

	if (x_edge1 == x_edge2)
		x = x_edge3;
	else if (x_edge1 == x_edge3)
		x = x_edge2;
	else
		x = x_edge1;

	if (y_edge1 == y_edge2)
		y = y_edge3;
	else if (y_edge1 == y_edge3)
		y = y_edge2;
	else
		y = y_edge1;

	cout << x << " " << y << endl;
	return 0;

}