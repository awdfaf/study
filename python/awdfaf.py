import sys
n=int(sys.stdin.readline())
arr=[]
for _ in range(n):
    arr.append(list(map(int,sys.stdin.readline().split())))
arr=sorted(arr,key=lambda x:[x[0],x[1]])
for a in arr:
    print(a[0],a[1])