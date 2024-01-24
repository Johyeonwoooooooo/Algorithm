#include<iostream>
#include<string>
using namespace std;

int main()
{
	int num;
	string S;
	while (true)
	{
		cin >> num;
		if (1 <= num && num <= 10)
			break;
	}

	for (int i = 0; i < num; i++)
	{
		cin >> S;
		cout << S[0] <<  S[S.length() - 1] << endl;
	}
	return 0;
}