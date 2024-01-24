#include<iostream>
using namespace std;

int main()
{
	//int N;
	//while (true)
	//{
	//	cin >> N;
	//	if (1 <= N && N <= 1000000)
	//		break;
	//}
	int* arr = new int[9];
	for (int i = 0; i < 9; i++)
		cin >> arr[i];

	// int min = arr[0];
	int max = arr[0];
	int max_index = 1;
	for (int i = 1; i < 9; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			max_index = i+1;
		}

		//if (arr[i] < min)
		//	min = arr[i];
	}
	cout << max << endl << max_index << endl;
	return 0;
}