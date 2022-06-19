#include <stdio.h>

void HanoiTower(int n, char a, char b, char c)
{
	if (n == 1) printf("원판 %d, %c -> %c\n", n, a, c);	
	else {
		HanoiTower(n - 1, a, c, b);
		printf("원판 %d, %c -> %c\n", n, a, c);
		HanoiTower(n - 1, b, a, c);
	}
}

int main(void)
{
	int n = 4;	// n은 원판 개수
	HanoiTower(n, 'A', 'B', 'C');

	return 0;
}