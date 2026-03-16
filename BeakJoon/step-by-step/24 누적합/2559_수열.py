n, k = map(int, input().split())
arr = list(map(int, input().split()))
answer = []

temp = 0
for i in range(k):
  temp += arr[i]
answer.append(temp)

for i in range(k, n):
  temp += arr[i]
  temp -= arr[i-k]
  answer.append(temp)

print(max(answer))