/*
#pragma warning(disable : 4996)
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int num[10], a, i = 0, j = 0;
	srand((unsigned int)time(NULL));
	printf("ã�� ���ڸ� �Է��Ͻÿ� ");
	scanf("%d", &a);


	printf("�������� ���� �迭 : ");
	for (int i = 0; i <= 9; i++) {
		num[i] = rand() % 100;
		printf("%d ", num[i]);
	}
	printf("\n");


	for (j = 0; j <= 0;) {
		for (i = 0; i <= 9; i++) {
			if (num[i] == a) {
				printf("ã���ô� ���ڴ� �迭�� %d��°�� �ֽ��ϴ�.", i - 1);
				j++;
			}
		}
	}
	if (j == 0) {
		printf("ã���ô� ���ڴ� �迭�� �����ϴ�.");
	}



}
*/