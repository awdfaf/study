#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define minFinder(a,b) a<b?a:b
#define SWAP(x,y,t) (t=x,x=y,y=t)


int compare(const void *a,const void *b)
{
    if(*(int *)a>*(int *)b)
        return -1;
    else if(*(int *)a<*(int *)b)
        return 1;
    else
        return 0;
}
int main()
{
    int N,i=0;
    int num[100];
    scanf("%d",&N);
    while(N>0)
    {
        num[i]=N%10;
        N/=10;
        i++;

    }
    
    qsort(num,i,sizeof(int),compare);

    for(int j=0;j<i;j++)
        printf("%d",num[j]);

    return 0;
}