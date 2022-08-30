sum, times = map(float, input().split())

for i in range(times):
    price, cnt = map(int, input().split())
    sum -= price * cnt

print("Yes" if sum == 0 else "No")