#pragma warning(disable : 4996)
#include <stdio.h>

int main() {
	int C;
	double F;
	for (C = -50;C <= 50;C += 5) {
		F = (double)C * 1.8 + 32;
		printf("���� %d���� ȭ�� %.3lf���Դϴ�.\n", C, F);
	}

}