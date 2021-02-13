/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int n;
	printf("ют╥б: ");
	scanf("%d", &n);
	srand((unsigned int)time(NULL));

	int** p = (int**)malloc(sizeof(int*) * n);
	for(int i = 0; i < n; i++)
		p[i] = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			p[i][j] = rand() % 100;
			printf("%d ",p[i][j]);
		}
		printf("\n");
	}

}
*/