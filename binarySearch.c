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
	
	printf("ã�� ��� : ");

	for (i = 0; i < n; i++)
		printf("%5d", a[i]);

	printf("\n");
	printf("ã�� ������ : ");
	scanf_s("%d", &key);

	index = seqSearch(a, n, key);
	
	if (index >= 0) printf("\n%d��(��) %d���� ã��!\n", key, index);
	else printf("\nã���� �ϴ� ���� ����!\n");
	return 0;
}