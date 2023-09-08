#include<iostream>
using namespace std;

int main()
{
	int N, M;
	while (true)
	{
		cin >> N >> M;
		if (1 <= N && N <= 100 && 1 <= M && M <= 100)
			break;
	}
	int A, B;
	int swap_helper;
	int* arr = new int[N];
	for (int i = 0; i < N; i++)
		arr[i] = i+1;

	for (int i = 0; i < M; i++)
	{
		cin >> A >> B;
		swap_helper = arr[A - 1];
		arr[A - 1] = arr[B - 1];
		arr[B - 1] = swap_helper;
	}

	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";
	return 0;
}