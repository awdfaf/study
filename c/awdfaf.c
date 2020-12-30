#include<stdio.h>
#include<math.h>

void hanoi_tower(int n, int from, int with, int to) {
	if (n == 1) {
		printf("%d %d\n", from, to);
		return;
	}
	hanoi_tower(n - 1, from, to, with);
	hanoi_tower(1, from, with, to);
	hanoi_tower(n - 1, with, from, to);
}
int main() {
	int n;
	scanf("%d", &n);
    printf("%d\n", (int)pow(2,n) - 1);
	hanoi_tower(n, 1, 2, 3);
}