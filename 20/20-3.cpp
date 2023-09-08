#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int num;
	cin >> num;
	
	int dancing_num = 0;
	vector<string> dancing_arr;
	for (int i = 0; i < num; i++)
	{
		string name1, name2;
		cin >> name1 >> name2;

		if ((name1 == "ChongChong" || name2 == "ChongChong") && dancing_num == 0)
		{
			dancing_num = 2;
			dancing_arr.push_back(name1);
			dancing_arr.push_back(name2);
		}

		if (find(dancing_arr.begin(), dancing_arr.end(), name1) == dancing_arr.end()
			&& find(dancing_arr.begin(), dancing_arr.end(), name2) != dancing_arr.end())
		{
			dancing_num++;
			dancing_arr.push_back(name1);
		}
		else if (find(dancing_arr.begin(), dancing_arr.end(), name1) != dancing_arr.end()
			&& find(dancing_arr.begin(), dancing_arr.end(), name2) == dancing_arr.end())
		{
			dancing_num++;
			dancing_arr.push_back(name2);
		}
	}
	cout << dancing_num << "\n";
	return 0;
}
