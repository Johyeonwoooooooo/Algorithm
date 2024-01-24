#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    string s;

    cin >> n;
    cin.ignore();

    string* arr = new string[n];
    vector <pair<int, string>> vector_arr;
    for (int i = 0; i < n; i++)
    {
        getline(cin, s);
        arr[i] = s;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[j] = "";
            }
        }
        vector_arr.push_back(make_pair(arr[i].length(), arr[i]));
    }
    vector_arr.push_back(make_pair(arr[n - 1].length(), arr[n - 1]));

    sort(vector_arr.begin(), vector_arr.end());
    for (auto it : vector_arr)
    {
        if (it.second != "")
            cout << it.second << "\n";
    }
    return 0;
}