#include<iostream>
using namespace std;

int main()
{
	int min, hour, c_time;
	while (true)
	{
		cin >> hour >> min;
		cin >> c_time;
		if (0 <= hour && hour <= 23 && 0 <= min && min <= 59 && 0 <= c_time && c_time <= 1000)
			break;
	}
	int added_hour = c_time / 60;
	c_time = c_time % 60;

	min = min + c_time;
	hour = hour + added_hour;

	if (min >= 60)
	{
		hour = hour + min / 60;
		min = min % 60;
		hour = hour % 24;
	}
	else
		hour = hour % 24;

	cout << hour << " " << min << endl;
	return 0;
}