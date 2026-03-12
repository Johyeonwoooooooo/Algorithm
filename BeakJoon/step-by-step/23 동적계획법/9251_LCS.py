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

w1 = input().strip()
w2 = input().strip()

len_w1, len_w2 = len(w1), len(w2)
d = [0] * len_w2

for i in range(len_w1):
    tmp = 0 # 임시로 받을 변수
    for j in range(len_w2):
        if tmp < d[j]: # 더 긴 LCS를 발견하였다면, 값을 수정
            tmp = d[j]
        elif w1[i] == w2[j]:
            d[j] = tmp + 1
    print(d)

print(max(d))

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