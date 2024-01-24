#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int edge1, edge2, edge3;
	cin >> edge1 >> edge2 >> edge3;
	
	int max_edge = max({ edge1,edge2,edge3 });
	int rest = edge1 + edge2 + edge3 - max_edge;

	if (max_edge < rest)
	{
		cout << edge1 + edge2 + edge3 << endl;
	}
	else
	{
		max_edge = rest - 1;
		cout << rest + max_edge << endl; 
	}
	return 0;
}