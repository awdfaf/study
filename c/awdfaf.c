#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define minFinder(a,b) a<b?a:b
#define SWAP(x,y,t) (t=x,x=y,y=t) //정렬 매크로 함수
#define MAX 100001


int N;
int x_line[16],y_line[16];
int back(int x,int y)
{
    for(int i=0;i<x;i++)
    {
        if(x==x_line[i] || y==y_line[i])
            return 0; // 가로 세로 겹치면 0리턴
        if (abs(y-y_line[i]) == abs(x-x_line[i]))
            return 0; // 대각선 겹치면 0리턴
    }
    if(x==N-1)
        return 1; // x가 마지막일때
    x_line[x]=x;
    y_line[x]=y;
    int cnt=0;
    for(int i=0;i<N;i++)
        cnt+=back(x+1,i);
    return cnt;
}
int main()
{
    scanf("%d",&N);
    int cnt=0;
    for(int i=0;i<N;i++)
        cnt+=back(0,i);
    printf("%d",cnt);
    return 0;
}