#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int A, B, V;
	cin >> A >> B >> V;
	int date = 1;
	int meter = 0;
	int date_meter = A - B;
	if (A < V)
	{
		V -= A;
		if (V % date_meter == 0)
			date+= (V/date_meter);
		else
			date += (V/date_meter) + 1;
	}
	cout << date << "\n";
	return 0;
}