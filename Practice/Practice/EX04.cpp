#pragma warning(disable : 4996)
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int num[10], max;
	srand((unsigned int)time(NULL));

	printf("�迭 : ");
	for (int i = 0;i <= 9;i++) {
		num[i] = rand() % 100;
		printf("%d ", num[i]);
	}
	printf("\n");

	printf("�ִ밪�� : ");
	for (int i = 0;i < 9;i++) {
		if (num[i] > num[i + 1]) {
			max = num[i];
		}
	}
	printf("%d\n", max);
	printf("�ִ밪�� ��ġ�� : ");
	for (int i = 0;i <= 9;i++) {
		if (num[i] == max) {
			printf("%d", i);
		}
	}
}