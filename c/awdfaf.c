#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define max(a,b) ((a)>(b)?(a):(b))


int main()
{
    char A[10002],B[10002];
    int Result[10003]={0};
    int temp,i,Aindex,Bindex,flag;

    scanf("%s %s",A,B);
    Aindex=strlen(A)-1;
    Bindex=strlen(B)-1;

    if(Aindex>Bindex)
        flag=1;
    else if(Aindex<Bindex)
        flag=2;
    else
        flag=-1;

    if(flag==1)
    {
        for(i=Bindex;i>=0;i--)
            B[Aindex-Bindex+i]=B[i];
        for(i=0;i<Aindex-Bindex;i++)
            B[i]='0';
    }
    if(flag==2)
    {
        for(i=Aindex;i>=0;i--)
            A[Bindex-Aindex+i]=A[i];
        for(i=0;i<Bindex-Aindex;i++)
            A[i]='0';
    }
    for(i=max(strlen(A),strlen(B))-1;i>=0;i--)
    {
        temp=(A[i]-'0')+(B[i]-'0');
        if(Result[i+1]+temp>=10)
        {
            Result[i+1]=(Result[i+1]+temp)%10;
            Result[i]++;
        }
        else
            Result[i+1]+=temp;
    }
        

    if(Result[0]==0)
        for(i=1;i<=max(strlen(A),strlen(B));i++)
            printf("%d",Result[i]);
    else
        for(i=0;i<=max(strlen(A),strlen(B));i++)
            printf("%d",Result[i]);
    
    



    return 0;
}

