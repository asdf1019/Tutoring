/*
#pragma warning(disable : 4996)
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int num[10], a, i = 0, j = 0;
	srand((unsigned int)time(NULL));
	printf("찾을 숫자를 입력하시오 ");
	scanf("%d", &a);


	printf("랜덤숫자 저장 배열 : ");
	for (int i = 0; i <= 9; i++) {
		num[i] = rand() % 100;
		printf("%d ", num[i]);
	}
	printf("\n");


	for (j = 0; j <= 0;) {
		for (i = 0; i <= 9; i++) {
			if (num[i] == a) {
				printf("찾으시는 숫자는 배열의 %d번째에 있습니다.", i - 1);
				j++;
			}
		}
	}
	if (j == 0) {
		printf("찾으시는 숫자는 배열에 없습니다.");
	}



}
*/