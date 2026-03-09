#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a_child, b_child;
	int a_parent, b_parent;

	cin >> a_child >> a_parent;
	cin >> b_child >> b_parent;

	int max_num = max(a_parent, b_parent);
	int min_num = min(a_parent, b_parent);
	int mod = 1;
	while (mod != 0)
	{
		mod = max_num % min_num;
		if (mod != 0)
		{
			max_num = min_num;
			min_num = mod;
		}
	}

	int child = (a_child * b_parent / min_num) + (b_child * a_parent / min_num);
	int parent = a_parent * b_parent / min_num;
	
	max_num = max(child, parent);
	min_num = min(child, parent);
	mod = 1;
	while (mod != 0)
	{
		mod = max_num % min_num;
		if (mod != 0)
		{
			max_num = min_num;
			min_num = mod;
		}
	}
	
	cout << child / min_num << " " << parent / min_num;
	return 0;
}