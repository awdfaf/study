n = int(input())

ls = []
for _ in range(n):
    age,name = map(str,input().split())
    age = int(age)
    ls.append((age,name))

ls.sort(key=lambda parameter_list: parameter_list[0])

for i in ls:
    print(i[0],i[1])