#include<iostream>
#include<string>
using namespace std;

int main()
{
	string Sentence;
	int word_num = 0;
	int word = 0;
	int space = 1;
	getline(cin, Sentence);
	for (int i = 0; i < Sentence.length(); i++)
	{
		if (Sentence[i] != ' ' && word == 0)
		{
			word_num++;
			word = 1;
			space = 0;
		}

		if (Sentence[i] == ' ' && space == 0)
		{
			word = 0;
			space = 1;
		}
	}
	cout << word_num << endl;
	return 0;
}