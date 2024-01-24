#include<iostream>
#include<string>
using namespace std;

int main()
{
	string num1;
	string num2;

	cin >> num1;
	cin.ignore();
	cin >> num2;
	cin.ignore();
	
	if (num1[2] > num2[2] || (num1[2] == num2[2] && num1[1] > num2[1]) || (num1[2] == num2[2] && num1[1] == num2[1] && num1[0] > num2[0]))
		cout << num1[2] << num1[1] << num1[0] << endl;
	else
		cout << num2[2] << num2[1] << num2[0] << endl;
	return 0;
}