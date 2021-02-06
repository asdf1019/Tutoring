#pragma warning(disable : 4996)
#include <stdio.h>

int main() {
	int N, sum = 0;

	while (1) {
		printf("0보다 큰 정수값 N을 입력하세요 : ");
		scanf("%d", &N);
		if (N <= 0) {
			printf("잘못입력하셨습니다. 다시 입력하세요\n");
		}
		else break;
	}

	for (int i = 1;i <= N;i++) {
		sum += i;
	}
	printf("1부터 N까지의 합 : %d", sum);
}