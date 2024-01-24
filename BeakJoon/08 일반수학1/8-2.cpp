#include<iostream>
#include<string>
using namespace std;

int main()
{
	int N, B;
	cin >> N >> B;
	string result;
	while (N > 0)
	{
		int k = N % B;
		N /= B;
		if (k > 9)
			k += 55;
		else
			k += 48;
		
		result += (char)k;
	}
	for(int i = result.length() - 1; i >=0; i--)
		cout << result[i];

	return 0;
}