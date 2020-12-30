import sys
N, K=sys.stdin.readline().split()
nums=list(map(int,input().split()))
K=int(K)
selected=0
min=K-selected

for i in range(0,len(nums)-2):
    for j in range(1,len(nums)-1):
        for k in range(2,len(nums)):
            if(i!=j and j!=k and i!=k):
                selected=nums[i]+nums[j]+nums[k]

            if(min>=(K-selected)):
                if((K-selected)>=0):
                    min=K-selected
                    selected_min=selected

print(selected_min)