#include<iostream>
using namespace std;

int main()
{
	int arr[5];
	for (int i = 0; i < 5; i++)
		cin >> arr[i];
	int avg = 0;
	int temp;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 5; i++)
		avg += arr[i];

	cout << avg  / 5 << endl << arr[2] << endl;
	return 0;
}