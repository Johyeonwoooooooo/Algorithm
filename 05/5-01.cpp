#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	int index;
	getline(cin, s);
	cin >> index;

	cout << s[index-1] << endl;
}