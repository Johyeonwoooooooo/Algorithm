#include<iostream>
#include<string>
using namespace std;

int main()
{
	double score = 0;
	double lecture_num = 0;
	string name;
	double point;
	string grade;
	for (int i = 0; i < 20; i++)
	{
		cin >> name >> point >> grade;
		lecture_num += point;
		if (grade == "A+")
			score += point * 4.5;
		else if (grade == "A0")
			score += point * 4.0;
		else if (grade == "B+")
			score += point * 3.5;
		else if (grade == "B0")
			score += point * 3.0;
		else if (grade == "C+")
			score += point * 2.5;
		else if (grade == "C0")
			score += point * 2.0;
		else if (grade == "D+")
			score += point * 1.5;
		else if (grade == "D0")
			score += point * 1.0;
		else if (grade == "P")
			lecture_num-= point;
	}
	cin.precision(10);
	score = score / lecture_num;
	cout << score << endl;
	return 0;
}