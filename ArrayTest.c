#include <stdio.h>

int main(void) {
	int i, j;
	char a[] = { 'P', 'r', 'a', 'c', 't', 'i', 'c', 'e', ' ', 'm', 'a', 'k', 'e', 's', ' ', 'p', 'e', 'r', 'f', 'e', 'c', 't', '.', '\0' };
	char b[5][10] = {	{' ', ' ', ' ', ' ', 'A', '\0' },
						{' ', ' ', ' ', 'A', 'B', 'C', '\0' },
						{' ', ' ', 'A', 'B', 'C', 'D','E', '\0' },
						{' ', 'A', 'B', 'C', 'D','E', 'F', 'G', '\0' },
						{'A', 'B', 'C', 'D','E', 'F', 'G', 'H', 'I', '\0' },
					};	

	printf("1. 배열 a: %s\n\n", a);

	printf("2. a 역순:");
	for (i = 23; i >= 0; i--) {
		printf("%c", a[i]);
	}printf("\n\n");

	printf("3. 배열 b에서 공백을 빼고 출력하기\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 10; j++) {
			if (b[i][j] != ' ') printf("%c", b[i][j]);
		}
		printf("\n");
	}printf("\n\n");

	printf("4. 배열 b의 4열만 출력하기\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 10; j++) {
			if(j%4==0 && j!=0 && j!=8)
				printf("%3c", b[i][j]);
		}
		printf("\n");
	}printf("\n");

	printf("5. 배열 b를 시계방향으로 90도 회전된 모양으로 출력하기\n");
	for (i = 0; i <10; i++) {
		for (j = 4; j >= 0; j--) {
			printf("%c", b[j][i]);
		}
		printf("\n");
	}printf("\n");

	return 0;
}