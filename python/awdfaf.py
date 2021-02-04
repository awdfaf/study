n=list(str(input()))
n.sort(reverse=True)
answer = ""
for i in n:
    answer += i
print(int(answer))