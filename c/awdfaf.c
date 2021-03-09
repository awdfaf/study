#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define minFinder(a,b) a<b?a:b
#define SWAP(x,y,t) (t=x,x=y,y=t) //정렬 매크로 함수
#define MAX 100001

int arr[8],visit_arr[8]={0};
int N,M;
void func(int n)
{
    if(n==M+1)
    {   for(int i=1;i<=M;i++)
            printf("%d ",arr[i]);
        printf("\n");
    }
    else
    {
        for(int i=1;i<=N;i++)
        {
            if(visit_arr[i]==0)
            {
                visit_arr[i]=1;
                arr[n]=i;
                func(n+1);
                visit_arr[1]=0;
            }
        }
    }
}
int main()
{
    scanf("%d %d",&N,&M);
    func(1);
    return 0;
}
// 재귀함수