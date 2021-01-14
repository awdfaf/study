#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define minFinder(a,b) a<b?a:b
#define SWAP(x,y,t) (t=x,x=y,y=t)

int num[1000000]={0};

int compare(const void *a,const void *b)
{
    if(*(int *)a>*(int *)b)
        return 1;
    else if(*(int *)a<*(int *)b)
        return -1;
    else
        return 0;
}
int main()
{
    int N;

    scanf("%d",&N);
    for(int i=0;i<N;i++)
        scanf("%d",&num[i]);
    
    qsort(num,N,sizeof(int),compare);

    for(int i=0;i<N;i++)
        printf("%d\n",num[i]);

    return 0;
}