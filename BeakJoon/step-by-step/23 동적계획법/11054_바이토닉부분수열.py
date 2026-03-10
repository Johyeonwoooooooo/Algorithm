"""
문제
수열 S가 어떤 수 Sk를 기준으로 S1 < S2 < ... Sk-1 < Sk > Sk+1 > ... SN-1 > SN을 만족한다면, 
그 수열을 바이토닉 수열이라고 한다.

예를 들어, {10, 20, 30, 25, 20}과 {10, 20, 30, 40}, {50, 40, 25, 10} 은 바이토닉 수열이지만, 
{1, 2, 3, 2, 1, 2, 3, 2, 1}과 {10, 20, 30, 40, 20, 30} 은 바이토닉 수열이 아니다.

수열 A가 주어졌을 때, 그 수열의 부분 수열 중 바이토닉 수열이면서 가장 긴 수열의 길이를 구하는 프로그램을 작성하시오.

입력
첫째 줄에 수열 A의 크기 N이 주어지고, 둘째 줄에는 수열 A를 이루고 있는 Ai가 주어진다. (1 ≤ N ≤ 1,000, 1 ≤ Ai ≤ 1,000)

출력
첫째 줄에 수열 A의 부분 수열 중에서 가장 긴 바이토닉 수열의 길이를 출력한다.
"""

import sys
input = sys.stdin.readline

n = int(input())
Ai = list(map(int, input().split()))
dp_up = [1]*n
dp_down = [1]*n

# 0~i 번째 수열 중 오름차순 제일 긴 수열 구하기
for i in range(n):
    for j in range(i):
        if Ai[j] < Ai[i]:
            dp_up[i] = max(dp_up[i], dp_up[j]+1)

# i~n번째 수열 중 내림차순 제일 긴 수열 구하기
for i in range(n-1, -1, -1):
    for j in range(n-1, i, -1):
        if Ai[j] < Ai[i]:
            dp_down[i] = max(dp_down[i], dp_down[j]+1)

result = 0
for i in range(n):
    result = max(result, dp_up[i] + dp_down[i] - 1)

print(result)