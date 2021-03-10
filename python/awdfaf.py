N,M=map(int,input().split())
check=[False]*(N+1)
answer=['0']*M

def dfs(index,start,n=N,m=M):
    if index ==m:
        print(' '.join(answer))
    else:
        for i in range(start,n+1):
            if check[i]:
                continue
            check[i]=True
            answer[index]=str(i)
            dfs(index+1,i+1)
            check[i]=False
dfs(0,1)