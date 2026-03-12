import sys
input = sys.stdin.readline

N, M = map(int, input().split())
numbers = list(map(int, input().split()))
prefix = [0] * (N + 1)

# 누적합
for i in range(N):
    prefix[i+1] = prefix[i] + numbers[i]

# 구간합
for _ in range(M):
    start, end = map(int, input().split())
    print(prefix[end] - prefix[start-1])