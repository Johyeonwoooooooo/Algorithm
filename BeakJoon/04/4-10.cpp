#include<iostream>
using namespace std;

int main()
{
	int N;
	cin.precision(10);
	cin >> N;
	double* arr = new double[N];
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	double max = arr[0];
	for (int i = 1; i < N; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}

	double avg = 0;
	for (int i = 0; i < N; i++)
	{
		arr[i] = arr[i] / max * 100;
		avg += arr[i];
	}

	avg /= N;

	cout << avg << endl;
	return 0;

}