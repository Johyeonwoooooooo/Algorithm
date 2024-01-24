#include<iostream>
using namespace std;

int main()
{
	int min, hour;
	while (true)
	{
		cin >> hour >> min;
		if (0 <= hour && hour <= 23 && 0 <= min && min <= 59)
			break;
	}
    
	if (min < 45)
	{
		min = min + 15;
		if (hour != 0)
			hour--;
		else
			hour = 23;
		cout << hour << " " << min << endl;
	}
	else
	{
		min = min - 45;
		cout << hour << " " << min << endl;
	}
	return 0;
}