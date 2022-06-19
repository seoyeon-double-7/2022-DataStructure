#include <stdio.h>
#define SIZE 1000000

int main(void) {
	int a[SIZE] = {10, };	// 배열 a 4Mb 크기

	printf("%d\n", a[0]);

	return 0;
}