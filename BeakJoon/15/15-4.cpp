#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int GCD(int a, int b) {
	if (b == 0) return a;
	return GCD(b, a % b);
}

int main()
{
	vector<int> v;
	vector<int> p;
	int N;
	cin >> N;
	int tmp;
	for (int i = 0; i < N; i++) 
	{
		cin >> tmp;
		p.push_back(tmp);
		if (i != 0)
			v.push_back(p[i] - p[i - 1]);
	}
	int gcd = v[0];
	for (int i = 1; i < v.size(); i++)
		gcd = GCD(gcd, v[i]);

	int len = p[N - 1] - p[0];
	int cnt = len / gcd - N + 1;

	cout << cnt;

}