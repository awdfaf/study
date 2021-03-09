n,m=map(int,input().split())

list=[1 + i for i in range(n)]



check=[False]*n
array=[]

def dfs(x):
    if x==m:
        print(*array)
        return
    for i in range(n):
        if check[i]:
            continue
        array.append(list[i])
        check[i]=True
        dfs(x+1)
        array.pop()
        check[i]=False
dfs(0)
# 백 트래킹 dfs