#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	int* arr = new int [26];
	for (int i = 0; i < 26; i++)
		arr[i] = 0;

	getline(cin, s);
	for (int i = 0; i < s.length(); i++)
	{
		switch (s[i])
		{
		case'a':case'A':
			arr[0] += 1;
			break;
		case'b':case'B':
			arr[1] += 1;
			break;
		case'c':case'C':
			arr[2] += 1;
			break;
		case'd':case'D':
			arr[3] += 1;
			break;
		case'e':case'E':
			arr[4] += 1;
			break;
		case'f':case'F':
			arr[5] += 1;
			break;
		case'g':case'G':
			arr[6] += 1;
			break;
		case'h':case'H':
			arr[7] += 1;
			break;
		case'i':case'I':
			arr[8] += 1;
			break;
		case'j':case'J':
			arr[9] += 1;
			break;
		case'k':case'K':
			arr[10] += 1;
			break;
		case'l':case'L':
			arr[11] += 1;
			break;
		case'm':case'M':
			arr[12] += 1;
			break;
		case'n':case'N':
			arr[13] += 1;
			break;
		case'o':case'O':
			arr[14] += 1;
			break;
		case'p':case'P':
			arr[15] += 1;
			break;
		case'q':case'Q':
			arr[16] += 1;
			break;
		case'r':case'R':
			arr[17] += 1;
			break;
		case's':case'S':
			arr[18] += 1;
			break;
		case't':case'T':
			arr[19] += 1;
			break;
		case'u':case'U':
			arr[20] += 1;
			break;
		case'v':case'V':
			arr[21] += 1;
			break;
		case'w':case'W':
			arr[22] += 1;
			break;
		case'x':case'X':
			arr[23] += 1;
			break;
		case'y':case'Y':
			arr[24] += 1;
			break;
		case'z':case'Z':
			arr[25] += 1;
			break;
		}
	}
	bool probe = true;
	int max = arr[0];
	int max_index = 0;

	for (int i = 1; i < 26; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			max_index = i;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (arr[i] == max && i != max_index)
			probe = false;
	}

	if (probe == true)
	{
		cout << char(max_index + 65) << endl;
	}
	else
		cout << "?" << endl;
	return 0;
}