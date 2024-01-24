#include<iostream>
using namespace std;

int main()
{
	int N;
	while (true)
	{
		cin >> N;
		if (N % 4 == 0 && 4 <= N && N <= 1000)
			break;
	}
	for (int i = 0; i < N / 4; i++)
		cout << "long ";
	cout << "int" << endl;
	return 0;
}