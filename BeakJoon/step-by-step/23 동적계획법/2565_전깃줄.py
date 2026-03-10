import sys
input = sys.stdin.readline

"""
A 탑 기준으로 정렬하기
A = [1, 2, ,3 ,4 ,5 ...]
B = [2, 4, 2, 9, 1 ....]

결국 이건 B의 가장긴 부분수열 찾기랑 똑같음.
부분수열이 오름차순 or 내림차순이면 안겹치니까
"""
N = int(input())
num_map = []
top_B = []
for _ in range(N):
    (a, b) = list(map(int, input().split()))
    num_map.append((a,b))
num_map.sort() # tuple은 sort 시 자동 첫번째 원소로 정렬
               # 만약 다른 원소로 정렬하고 싶으면 key=lambda x : x[i] (i번째 원소)

top_B = [b for (_, b) in num_map]

dp = [1 for _ in range(N)]

for i in range(N):
    for j in range(i):
        if top_B[i] > top_B[j]:
            dp[i] = max(dp[i], dp[j] + 1)

print(N - max(dp)) # 끊어야 하는 수 = 전체 - 최대 길이