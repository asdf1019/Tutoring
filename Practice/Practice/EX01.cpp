#pragma warning(disable : 4996)
#include <stdio.h>

int main() {
	int N, sum = 0;

	while (1) {
		printf("0���� ū ������ N�� �Է��ϼ��� : ");
		scanf("%d", &N);
		if (N <= 0) {
			printf("�߸��Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���\n");
		}
		else break;
	}

	for (int i = 1;i <= N;i++) {
		sum += i;
	}
	printf("1���� N������ �� : %d", sum);
}