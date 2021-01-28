#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define minFinder(a,b) a<b?a:b
#define SWAP(x,y,t) (t=x,x=y,y=t)



int main()
{
    int n,a[10001]={0},tmp;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&tmp);
        a[tmp]++;
    }
    for(int i=0;i<10001;i++)
    {
        if(a[i]!=0)
        {
            for(int j=0;j<a[i];j++)
                printf("%d\n",i);
        }
    }



    return 0;
}