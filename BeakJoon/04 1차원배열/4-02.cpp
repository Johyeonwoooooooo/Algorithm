#include<iostream>
using namespace std;

int main()
{
	int N, X;
	while (true)
	{
		cin >> N >> X;
		if (1 <= N && N <= 10000 && 1 <= X && X <= 10000)
			break;
	}
	int* arr = new int[N];
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	for (int i = 0; i < N; i++)
	{
		if (arr[i] < X)
			cout << arr[i] << " ";
	}
	return 0;
}