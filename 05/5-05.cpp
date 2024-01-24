#include<iostream>
#include<string>
using namespace std;

int main()
{
	string S;
	int index;
	cin >> index;
	cin.ignore();
	getline(cin,S);

	int result = 0;
	for (int i = 0; i < index; i++)
	{
		result += S[i] - '0';
	}

	cout << result << endl; 
	return 0;
}