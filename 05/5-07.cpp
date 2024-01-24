#include<iostream>
#include<string>
using namespace std;

int main()
{
	int case_num;
	while (true)
	{
		cin >> case_num;
		if (1 <= case_num && case_num <= 1000)
			break;
	}
	int num;
	string S;
	for (int i = 0; i < case_num; i++)
	{
		cin >> num;
		cin.ignore();
		getline(cin, S);
		for (int j = 0; j < S.length(); j++)
		{
			for (int k = 0; k < num; k++)
				cout << S[j];
		}
		cout << "\n";
	}
	return 0;
}