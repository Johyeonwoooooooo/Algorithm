#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<tuple>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int age;
    string name;

    vector<tuple<int, int, string>> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> age >> name;
        arr.push_back(make_tuple(age, i, name));
    }

    sort(arr.begin(), arr.end());

    for (auto it : arr)
    {
        cout << get<0>(it) << " " << get<2>(it) << "\n";
    }
    return 0;
}