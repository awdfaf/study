#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define minFinder(a,b) a<b?a:b
#define SWAP(x,y,t) (t=x,x=y,y=t) //정렬 매크로 함수
#define MAX 100001

typedef struct IDX
{
    char mun[51];
}idx;

idx m[20000];

int func(const void* a,const void* b)
{
    idx A=*(idx*)a;
    idx B=*(idx*)b;
    int lenA=strlen(A.mun);
    int lenB=strlen(B.mun);
    if(lenA != lenB)
        return (lenA-lenB);
    return strcmp(A.mun,B.mun);
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%s",m[i].mun);
    qsort(m,n,sizeof(idx),func);
    for(int i=0;i<n;i++)
    {
        if(i != 0)
        {
            if(strcmp(m[i-1].mun,m[i].mun)==0)
                continue;
        }
        printf("%s\n",m[i].mun);
    }
    return 0;
}