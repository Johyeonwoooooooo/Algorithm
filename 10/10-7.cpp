#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int edge1, edge2, edge3;
	while (true)
	{
		cin >> edge1 >> edge2 >> edge3;
		if (edge1 == 0 && edge2 == 0 && edge3 == 0)
			break;

		int max_edge = max({ edge1, edge2, edge3 });
		int rest = edge1 + edge2 + edge3 - max_edge;
		if (rest > max_edge)
		{
			if (edge1 == edge2 && edge2 == edge3 && edge3 == edge1)
				cout << "Equilateral" << endl;
			else if (edge1 != edge2 && edge2 != edge3 && edge3 != edge1)
				cout << "Scalene" << endl;
			else
				cout << "Isosceles" << endl;
		}
		else
			cout << "Invalid" << endl;
	}

	return 0;
}