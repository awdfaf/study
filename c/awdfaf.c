#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define minFinder(a,b) a<b?a:b
#define SWAP(x,y,t) (t=x,x=y,y=t) //정렬 매크로 함수
#define MAX 100001

int *result=NULL;

void backtracking(int n,int m,int index);

int main()
{
    int n,m,index=0;
    scanf("%d %d",&n,&m);
    result=(int *)calloc(m,sizeof(int));
    backtracking(n,m,index);
    free(result);
    return 0;
}

void backtracking(int n,int m,int index)
{
    if(m==0)
    {
        for(int i=0;i<index;i++)
            printf("%d ",result[i]);
        printf("\n");
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            result[index]=i;
            backtracking(n,m-1,index+1);
        }
    }
    
}