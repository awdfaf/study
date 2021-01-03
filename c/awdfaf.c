#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>



int main()
{
    int dsum=0,a=0,len=0;
    int sum=0,check=0,ori=0,i=0;

    scanf("%d",&dsum);
    a=dsum;
    while(1)
    {
        a/=10;
        len++;
        if(a==0)
            break;
    }
    for(ori=dsum-9*len;ori<=dsum;ori++)
    {
        i=ori;
        sum=ori;
        while(1)
        {
            sum+=i%10;
            i/=10;
            if(i==0)
                break;
        }
        if(sum==dsum)
        {
            check=1;
            printf("%d",ori);
            break;
        }
    }
    if(check==0)
        printf("0");

    return 0;
}

