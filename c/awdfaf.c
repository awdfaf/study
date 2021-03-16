#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define minFinder(a,b) a<b?a:b
#define SWAP(x,y,t) (t=x,x=y,y=t) //정렬 매크로 함수
#define MAX 100001

int arr[9]={0},visit[9]={0};
int N,M;
void dfs(int num,int cnt)
{
    if(cnt==M)
    {
        for(int i=0;i<M;i++)
            printf("%d ",arr[i]);
        printf("\n");
        return;
    }
    for(int i=num;i<=N;i++)
    {
        visit[i]=1;
        arr[cnt]=i;
        dfs(i,cnt+1);
        visit[i]=0;
    }
}
int main()
{
    scanf("%d %d",&N,&M);
    dfs(1,0);
    return 0;
}