#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define minFinder(a,b) a<b?a:b



int main()
{
    char board[50][50];
    int N,M,min=80,cnB=0,cnW=0;

    scanf("%d %d",&N,&M);

    for(int i=0;i<N;i++)
        scanf("%s",&board[i]);
    for(int i=0;i<N-7;i++)
        for(int j=0;j<M-7;j++)
        {
            cnB=0;
            cnW=0;
            for(int a=i;a<i+8;a++)
                for(int b=j;b<j+8;b++)
                {
                    if((a+b)%2==0)
                    {
                        if(board[a][b]=='B')
                            cnW++;
                        else
                            cnB++;
                    }
                    else
                    {
                        if(board[a][b]=='B')
                            cnB++;
                        else
                            cnW++;
                    }    
                    
                }
        
            min=minFinder(min,cnB);
            min=minFinder(min,cnW);
        }
    printf("%d",min);


    

    return 0;
}