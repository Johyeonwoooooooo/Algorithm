#include<iostream>
using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;
	int B_hun = B / 100;
	int B_tem = (B - B_hun*100) / 10;
	int B_one = B % 10;

	cout << A * B_one << endl;
	cout << A * B_tem << endl;
	cout << A * B_hun << endl;
	cout << A * B << endl;
	return 0;
}