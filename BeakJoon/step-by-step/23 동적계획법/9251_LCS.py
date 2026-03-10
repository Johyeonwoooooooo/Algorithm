"""
LCS(Longest Common Subsequence, 최장 공통 부분 수열)문제는 두 수열이 주어졌을 때,
 모두의 부분 수열이 되는 수열 중 가장 긴 것을 찾는 문제이다.

예를 들어, ACAYKP와 CAPCAK의 LCS는 ACAK가 된다.
"""

"""
dp 2개? 2차원?

dp[i] 에서 i는 뭐로 해야할까 -> i가 마지막 원소일 때 이게 제일 나아보임
그럼 첫번째 문자만 두고 두번째는 온전히 나두면서 찾아보기?

dp두고 index 리스트 하나 더 둬서 어디서부터 탐색하면 되는지 확인하기?

A
CAPCAK => 왼쪽에서 부터 검색

AC
CAPCAK => 2, 4번째

ACA
CAPCAK => 2번째 4번째 5번째

ACAY
CAPCAK => 2번째 4번째 5번째
"""


import sys
input = sys.stdin.readline

first = input().strip()
second = input().strip()

first_n = len(first)

dp = [0 for _ in range(first_n)]
index_list = [0 for _ in range(first_n + 1)]

for i in range(first_n):
    second_index = second[index_list[i]:].find(first[i])
    if i == 0:
        if second_index != -1:
            dp[i] = 1
            index_list[i+1] = second_index + 1
        else:
            dp[i] = 0
    else:
        if second_index != -1:
            dp[i] = dp[i-1] + 1
            index_list[i+1] = index_list[i] + second_index + 1
        else:
            dp[i] = dp[i-1]
            index_list[i+1] = index_list[i]

print(max(dp))

"""
dp 2개? 2차원?

dp[i] 에서 i는 뭐로 해야할까 -> i가 마지막 원소일 때 이게 제일 나아보임
그럼 첫번째 문자만 두고 두번째는 온전히 나두면서 찾아보기?

dp두고 index 리스트 하나 더 둬서 어디서부터 탐색하면 되는지 확인하기?

A
CAPCAK => 왼쪽에서 부터 검색

AC
CAPCAK => 2, 4번째

ACA
CAPCAK => 2번째 4번째 5번째

ACAY
CAPCAK => 2번째 4번째 5번째
"""