/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int x, y;
	printf("ют╥б: ");
	scanf("%d %d", &x, &y);
	srand((unsigned int)time(NULL));

	int** p = (int**)malloc(sizeof(int*) * x);
	for (int i = 0; i < x; i++)
		p[i] = (int*)malloc(sizeof(int) * y);

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			p[i][j] = rand() % 100;
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
}
*/
