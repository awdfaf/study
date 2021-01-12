#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define minFinder(a,b) a<b?a:b



int main()
{
    int n,tmp;

    scanf("%d",&n);
    int num=665,cnt=0;
    while(cnt!=n)
    {
        tmp=++num;
        while(tmp)
        {
            if(tmp%1000==666)
            {
                cnt++;
                break;
            }
            tmp/=10;
        }
    }
    printf("%d",num);

    return 0;
}