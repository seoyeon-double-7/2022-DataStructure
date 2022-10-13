#include <stdio.h>

int seqSearch(int a[], int n, int key) {
	for (int i = 0; i < n; i++)
		if (a[i] == key) return i;
	return -1;
}

int main(void) {
	int i, key, index, n;
	int a[] = { 5, 30, 27, 11, 35, 48, 10, 21 };
	n = sizeof(a) / sizeof(int);
	
	printf("찾을 대상 : ");

	for (i = 0; i < n; i++)
		printf("%5d", a[i]);

	printf("\n");
	printf("찾을 데이터 : ");
	scanf_s("%d", &key);

	index = seqSearch(a, n, key);
	
	if (index >= 0) printf("\n%d을(를) %d에서 찾음!\n", key, index);
	else printf("\n찾고자 하는 값이 없음!\n");
	return 0;
}