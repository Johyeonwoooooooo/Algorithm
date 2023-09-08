	#include<iostream>
	#include<algorithm>
	using namespace std;

	int main()
	{
		long long n;
		cin >> n;

		int arr[10] = { 0 };
		int index = 0;
		while (n != 0)
		{
			arr[index] = n % 10;
			n /= 10;
			index++;
		}
	
		sort(arr, arr + index);

		for (int i = index-1; i >= 0; i--)
			cout << arr[i];
		return 0;
	}