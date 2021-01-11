n,m=map(int,input().split())
I=[]
mini=[]

for _ in range(n):
    I.append(input())
for a in range(n-7):
    for i in range(m-7):
        idx1=0
        idx2=0
        for b in range(a,a+8):
            for j in range(i,i+8):
                if(j+b)%2==0:
                    if I[b][j] != 'W': idx1+=1
                    if I[b][j] != 'B': idx2+=1
                else:
                    if I[b][j] != 'B': idx1+=1
                    if I[b][j] != 'W': idx2+=1
        mini.append(idx1)
        mini.append(idx2)
print(min(mini))