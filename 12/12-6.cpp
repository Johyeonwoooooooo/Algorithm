#include<iostream>
using namespace std;

int main()
{
	int sugar;
	cin >> sugar;
	int plastic_bag = 0;
	bool find = false;

	while (true)
	{
		plastic_bag++;

		if (plastic_bag * 3 > sugar)
			break;

		for (int i = 0; i < plastic_bag+1; i++)
		{
			if ((3 * plastic_bag + 2 * i) == sugar)
			{
				find = true;
				break;
			}
		}

		if (find)
			break;

	}

	if (find)
		cout << plastic_bag << endl;
	else
		cout << -1 << endl;
	return 0;
}