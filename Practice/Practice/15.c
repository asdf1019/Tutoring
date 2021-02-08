/*
#include <stdio.h>

int d(int n);

int main() {
	int n = 1, num[100] = { 0 }, k, i = 0;

	while (n <= 100) {
		num[i] = n;
		d(n);
		i++;
	}

	for (int j = 1; j < 101; j++) {
		for (int i = 0; i < 101; i++) {
			if (num[i] == j) {
				continue;
			}
			else {
				break;
				printf("%d\n", j);
			}
		}
	}
}

int d(int n) {
	int a, b, c;
	if (n >= 10) {
		if (n >= 100) {
			c = n / 100;
			b = (n - c * 100) / 10;
			a = n - c * 100 - b * 10;
			n = n + a + b + c;
		}
		else {
			b = n / 10;
			a = n - b * 10;
			n = n + a + b;
		}
	}
	else {
		n = n + n;
	}

	return n;
}
*/