#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define max(a,b) ((a)>(b)?(a):(b))

int main()
{
    int n;
    scanf("%d\n", &n);

    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        { //나누어떨어지는 동안 계속 출력
            printf("%d\n", i);
            n /= i; //나눈 후 몫을 계속 갱신해준다.
        }
    }

    if (n != 1)
        printf("%d\n", n);

    return 0;
}