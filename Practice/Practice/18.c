/*
#pragma warning (disable: 4996)
#include <stdio.h>

int input();
int cal(int num);

int main() {
	int num, result, temp, cycle = 0;

	num = input();
	temp = num;

	while (1) {
		result = cal(num);
		cycle++;
		if (result == temp) {
			break;
		}
		else num = result;
	}
	printf("%d", cycle);

}

int input() {
	int num;
	scanf("%d", &num);
	return num;
}

int cal(int num) {
	int a, b, k;

	if (num < 10) {
		num = num + num * 10;
	}
	else {
		a = num / 10;
		b = num - a * 10;
		k = a + b;

		if (k < 10) {
			num = b * 10 + k;
		}
		else {
			num = k % 10 + b * 10;
		}

	}

	return num;
}
*/