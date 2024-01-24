#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
	int B;
	string s;
	cin >> s >> B;

	int result = 0;

	for (int i = s.length() - 1; i >= 0; i--)
	{
		int n = 0;
		if (s[s.length() - 1 - i] >= 'A' && s[s.length() - 1 - i] <= 'Z')
			n = s[s.length() - 1 - i] - 55;
		else
			n = s[s.length() - 1 - i] - 48;
		result += n*pow(B,i);
	}
	cout << result << endl;
	return 0;
}