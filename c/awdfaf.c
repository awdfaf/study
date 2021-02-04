#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) a<b?a:b
#define SWAP(x,y,t) (t=x,x=y,y=t)

int func(const void* a,const void* b)
{
    int n1=*(int*)a;
    int n2=*(int*)b;
    if(n1<n2)
        return -1;
    else if(n1>n2)
        return 1;
    else
        return 0;
}

int main()
{
    int n,sum=0,x[500000],y[8001]={0};

    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        sum+=x[i];
        y[x[i]+4000]++;
    }

    qsort(x,n,sizeof(int),func);

    int flag=0,max=1,maxidx=0;

    for(int i=0;i<8001;i++)
    {
        if(max<=y[i])
            max=y[i];
    }
    for(int i=0;i<8001;i++)
    {
        if(max==y[i])
        {
            maxidx=i;
            flag++;
        }
        if(flag==2)
            break;
    }
    printf("%.lf\n",(double)sum/(double)n);
    printf("%d\n",x[((n-1)/2)]);
    printf("%d\n",maxidx-4000);
    printf("%d\n",x[n-1]-x[0]);
    

    return 0;
}