#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define minFinder(a,b) a<b?a:b
#define SWAP(x,y,t) (t=x,x=y,y=t) //정렬 매크로 함수
#define MAX 100000

int compare(const void *a,const void *b)
{
    const int *i = (const int *)a;
    const int *j = (const int *)b;
    if(i[0]>j[0])
        return 1;
    else if(i[0]==j[0])
        return i[1]>j[1];
    return 0;
}

int main()
{
    int d[MAX][2];

    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&d[i][0],&d[i][1]);
    }
    qsort(d,t,sizeof(int)*2,compare);

    for(int i=0;i<t;i++)
    {
        printf("%d %d\n",d[i][0],d[i][1]);
    }
    return 0;
}