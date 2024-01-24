#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num;
    int* arr = new int[n];
    vector <int> vector_arr1;  // 정렬 할 벡터 리스트
    vector <int> vector_arr2; // 원본
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        vector_arr1.push_back(num);
        vector_arr2.push_back(num);
    }
    sort(vector_arr1.begin(), vector_arr1.end());  // 정렬
    vector_arr1.erase(unique(vector_arr1.begin(), vector_arr1.end()), vector_arr1.end());  // 중복되는 값 지우기

    for (int i = 0; i < n; i++) {
        cout << lower_bound(vector_arr1.begin(), vector_arr1.end(), vector_arr2[i]) - vector_arr1.begin() << " ";  // lower_bond(시작, 끝, 무엇?) -> 작거나 같은거 찾기
    }
    return 0;
}