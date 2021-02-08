/*
#pragma warning(disable : 4996)
#include <stdio.h>

int main() {
	int num;
	while (1) {
		printf("1~9 사이의 정수를 입력하시오 : ");
		scanf("%d", &num);

		if (num < 1 || num>9) {
			printf("잘못 입력하셨습니다. 1~9 사이의 수를 입력하시오\n");
		}
		else break;
	}
	printf("%d단 구구단을 출력합니다.\n", num);
	for (int i = 1;i < 10;i++) {
		printf("%d * %d = %d\n", num, i, num * i);
	}
}
*/