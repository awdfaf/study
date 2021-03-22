#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//#define max(a,b) ((a)>(b)?(a):(b))
//#define minFinder(a,b) a<b?a:b
//#define SWAP(x,y,t) (t=x,x=y,y=t) //정렬 매크로 함수
//#define MAX 100001


int spec[20][20]={0},team[20]={0}; //배열 team에서는 인덱스에 해당하는 1로 뽑힌 사람을 표시한다.
int num=0,start=0,link=0,power=0,min=2000;
void members(int idx, int cnt) {
	if (cnt == num / 2) { //팀을 반으로 나눴으면
		start = 0; link = 0;
		for (int i = 0; i < num; i++) {
			for (int j = i + 1; j < num; j++) {
				if(team[i]==1 && team[j]==1) start += spec[i][j] + spec[j][i]; //뽑힌 사람들로 능력치 더하기
				if (team[i] != 1 && team[j] != 1) link += spec[i][j] + spec[j][i]; //뽑히지 않은 사람들로 능력치 더하기
			}
		}
		power = abs(start - link); //절댓값을 구하는 abs() 함수
		if (power < min) min = power;
		return;
	}
	for (int i = idx; i < num; i++) {
		if (team[i] != 1) {
			team[i] = 1; //차례대로 뽑힌 사람 선정
			members(i, cnt + 1);
			team[i] = 0;
		}
	}
}
int main()
{
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<num;j++)
		{
			scanf("%d",&spec[i][j]);
		}
	}
	members(0,0);
	printf("%d",min);
	return 0;
}