#include<iostream>
using namespace std;

int main()
{
	int N,K;
	cin >> N >> K;
	int  divisor_num = 0;
	int* arr = new int [N];
	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)
		{
			arr[divisor_num] = i;
			divisor_num++;
		}
	}

	if (divisor_num < K)
		cout << "0" << endl;
	else
		cout << arr[K - 1];
}