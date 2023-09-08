//#include<iostream>
//#include<vector>
//#include<unordered_map>
//#include<iterator>
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	int log_num;
//	cin >> log_num;
//	unordered_map<string, int> arr;
//	string name, log;
//	for (int i = 0; i < log_num; i++)
//	{
//		cin >> name >> log;
//		if (log == "enter")
//			arr[name] = 1;
//		else
//			arr[name] = 0;
//	}
//
//	for (auto it = arr.rbegin(); it != arr.rend(); ++it)   // 여기서 컴파일 오류 -> 역순으로 출력하고 싶은데
//	{                                                      // unordered_map이라 불가 아래 map으로 다시 
//		if (it.second == 1)
//			cout << it.first << "\n";
//	}
//	return 0;
//}

#include <iostream>
#include <map>
#include <iterator>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int log_num;
    cin >> log_num;
    map<string, int, greater<string>> arr;  // greater<string>를 통해 역순 정렬
    string name, log;
    for (int i = 0; i < log_num; i++) {
        cin >> name >> log;
        if (log == "enter")
            arr[name] = 1;
        else
            arr[name] = 0;
    }

    for (const auto& entry : arr) {
        if (entry.second == 1)
            cout << entry.first << "\n";
    }
    return 0;
}
