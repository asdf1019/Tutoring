#pragma warning(disable : 4996)
#include <stdio.h>

int main() {
	int i, j, n;
	for (i = 1;i < 8;i += 3) {
		for (j = 0;j < 10;j++) {
			printf("%d x %d = %2d    ", i, j, i * j);
			printf("%d x %d = %2d    ", i + 1, j, (i + 1) * j);
			printf("%d x %d = %2d", i + 2, j, (i + 2) * j);
			printf("\n");
		}
		printf("\n");
	}

}