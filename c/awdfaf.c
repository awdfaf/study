#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>



int main()
{
    int N,M,sum=0,max=-1;

    scanf("%d %d",&N,&M);

    int a[N];

    for(int i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<N-2;i++)
        for(int j=i+1;j<N-1;j++)
            for(int k=j+1;k<N;k++)
                {
                    sum=a[i]+a[j]+a[k];
                    if(sum==M)
                    {
                        printf("%d",sum);
                        return 0;
                    }
                    else if(sum<M)
                    {
                        if(sum>max)
                            max=sum;
                    }
                }
    printf("%d",max);


    return 0;
}

