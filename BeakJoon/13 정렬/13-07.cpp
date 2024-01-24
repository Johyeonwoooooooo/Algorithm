#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector <pair<int, int>> arr;
    int n;
    cin >> n;
    int x_pos, y_pos;

    for (int i = 0; i < n; i++)
    {
        cin >> x_pos >> y_pos;
        arr.push_back(make_pair(y_pos, x_pos));
    }

    sort(arr.begin(), arr.end());

    for (auto it : arr)
    {
        cout << it.second << " " << it.first << "\n";
    }
}