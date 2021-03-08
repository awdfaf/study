#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define minFinder(a,b) a<b?a:b
#define SWAP(x,y,t) (t=x,x=y,y=t) //정렬 매크로 함수
#define MAX 100001

typedef struct info
{
    int n;
    int age;
    char name[101];
}info;

info infoo[100001];
int compare(const void* a,const void* b);

int main()
{
    int i,N,count=1;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d %s",&infoo[i].age,infoo[i].name);
        infoo[i].n=count++;
    }
    qsort(infoo,N,sizeof(info),compare);
    for(i=0;i<N;i++)
    {
        printf("%d %s\n",infoo[i].age,infoo[i].name);
    }
}
int compare(const void* a,const void* b)
{
    info* ptrA=(info*)a;
    info* ptrB=(info*)b;

    if(ptrA->age < ptrB->age)
        return -1;
    else if(ptrA->age > ptrB->age)
        return 1;
    else
    {
        if(ptrA->n < ptrB->n)
            return -1;
        else if(ptrA->n > ptrB->n)
            return 1;
        return 0;
    }
}
