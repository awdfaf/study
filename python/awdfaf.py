n=int(input())
dot_list=[]

for _ in range(n):
    dot_list.append(list(map(int,input().split())))

dot_list.sort(key=lambda dot: (dot[1],dot[0]))
for [i,j] in dot_list:
    print(i,j)