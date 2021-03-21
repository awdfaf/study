#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//#define max(a,b) ((a)>(b)?(a):(b))
//#define minFinder(a,b) a<b?a:b
//#define SWAP(x,y,t) (t=x,x=y,y=t) //정렬 매크로 함수
//#define MAX 100001


int num[11];
int opt[4]; //연산자의 개수 쳌
int arr[11];
int max=-1000000000;
int min=1000000000;
int n;

int operation(int n,int ans,int num)
{
	if(n==0)
		ans+=num;
	else if (n==1)
		ans-=num;
	else if(n==2)
		ans*=num;
	else
		ans/=num;
	return ans;
	
}
void dfs(int ans,int cnt)
{
	if(cnt==n)
	{
		max=max>ans?max:ans;
		min=min>ans?ans:min;
		return;
	}
	for(int i=0;i<4;i++)
	{
		if(opt[i]>0)
		{
			opt[i]--;
			dfs(operation(i,ans,num[cnt]),cnt+1);
			opt[i]++;
		}
	}
}
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(int i=0;i<4;i++)
		scanf("%d",&opt[i]);
	
	dfs(num[0],1);
	printf("%d\n%d",max,min);
}
