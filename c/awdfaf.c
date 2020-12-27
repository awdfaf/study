#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int fibo(int n);

int main()
{
    int n;
    scanf("%d",&n);

    printf("%d",fibo(n));

    return 0;
}

int fibo(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else 
        return (fibo(n-2)+fibo(n-1));
}