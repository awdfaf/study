#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define minFinder(a,b) a<b?a:b
#define SWAP(x,y,t) (t=x,x=y,y=t)

//버블정렬

int main()
{
    int i,j,tmp,num,number[1000]={0};

    scanf("%d",&num);

    for(i=0;i<num;i++)
        scanf("%d",&number[i]);
    
    for(i=num-1;i>0;i--)
    {
        for(j=0;j<i;j++)
            if(number[j]>number[j+1])
                SWAP(number[j],number[j+1],tmp);
    }
    for(int i=0;i<num;i++)
        printf("%d\n",number[i]);




    return 0;
}









// 삽입정렬
// int main()
// {
//     int i,j,key,num,number[1000]={0};

//     scanf("%d",&num);

//     for(i=0;i<num;i++)
//         scanf("%d",&number[i]);
    
//     for(i=1;i<num;i++)
//     {
//         key=number[i];
//         for(j=i-1;j>=0 && number[j]>key;j--)
//         {
//             number[j+1]=number[j];
//             number[j]=key;
//         }
//     }
//     for(int i=0;i<num;i++)
//         printf("%d\n",number[i]);

//     return 0;
// }