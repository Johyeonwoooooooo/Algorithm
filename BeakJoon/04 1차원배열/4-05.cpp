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
	int ball_num;
	int* arr = new int [N];
	for (int i = 0; i < N; i++)
		arr[i] = 0;

	for (int i = 0; i < M; i++)
	{
		cin >> A >> B >> ball_num;
		for (int j = A - 1; j < B; j++)
			arr[j] = ball_num;
	}

	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";
	return 0;
}