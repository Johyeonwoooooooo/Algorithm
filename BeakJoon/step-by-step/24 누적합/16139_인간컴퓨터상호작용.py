import sys
input = sys.stdin.readline

S = input().strip()
q = int(input())

prefix = [[0]*len(S) for _ in range(26)] # 알파벳 숫자만큼

for i, ch in enumerate(S):
    idx = ord(ch) - ord('a')
    for j in range(26):
        prefix[j][i] = prefix[j][i-1] if i > 0 else 0
    prefix[idx][i] += 1

for _ in range(q):
    line = input().split()
    alpha = line[0]
    l, r = map(int, line[1:])
    idx = ord(alpha) - ord('a')
    
    res = prefix[idx][r] - (prefix[idx][l-1] if l > 0 else 0)
    print(res)