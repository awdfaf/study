#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//#define max(a,b) ((a)>(b)?(a):(b))
//#define minFinder(a,b) a<b?a:b
//#define SWAP(x,y,t) (t=x,x=y,y=t) //정렬 매크로 함수
//#define MAX 100001


int main()
{
	int fibo[42][2];
	fibo[0][0] = 1;
	fibo[0][1] = 0;
	fibo[1][0] = 0;
	fibo[1][1] = 1;

	for(int k=2;k<42;k++)
	{
		fibo[k][0] = fibo[k - 1][0] + fibo[k - 2][0];
		fibo[k][1] = fibo[k - 1][1] + fibo[k - 2][1];
	}
	int a,c;
	scanf("%d", &a);
	for (int k = 0; k < a; k++)
	{
		scanf("%d", &c);
		printf("%d %d\n", fibo[c][0], fibo[c][1]);
	}
}