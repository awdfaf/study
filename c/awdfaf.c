#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define max(a,b) ((a)>(b)?(a):(b))

int main()
{
    int n,x[51],y[51],count[51]={0};

    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&x[i],&y[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                continue;
            if(x[i]<x[j] && y[i]<y[j])
                count[i]++;
        }
        printf("%d ",count[i]+1);
    }
    

    return 0;
}