#pragma warning(disable : 4996)
#include <stdio.h>

int main() {
	int num1, num2;
	printf("���� 2���� �Է��ϼ��� : ");
	scanf("%d %d", &num1, &num2);

	if (num1 < num2) {
		for (int j = num1;num1 <= num2;num1++) {
			for (int i = 1; i <= num1; i++) {
				printf("*");
			}
			printf("\n");
		}
		
		
	}
	else {
		for (int j = num1;num1 >= num2;num1--) {
			for (int i = 1; i <= num1; i++) {
				printf("*");
			}
			printf("\n");
		}
		
		
	}
		
}