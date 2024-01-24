#include<iostream>
using namespace std;

int main()
{
	int N;
	while (true)
	{
		cin >> N;
		if (1 <= N && N <= 100)
			break;
	}
	int* arr = new int[N];
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	int wnt;
	cin >> wnt;
	int cnt = 0;
	for (int i = 0; i < N; i++)
	{
		if (wnt == arr[i])
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}