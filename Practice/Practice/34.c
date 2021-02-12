/*
#include <stdio.h>

typedef struct student{
	int num;
	double height;
	double weight;
} student[10];

int main() {
	int N;
	double sumh = 0, sumw = 0;
	scanf("%d", &N);
	student student;
	
	for (int i = 0; i < N; i++) {
		scanf("%d %lf %lf", &student[i].num, &student[i].height, &student[i].weight);
		sumh = sumh + student[i].height;
		sumw = sumw + student[i].weight;
	}

	printf("%.1lf %.1lf \n", sumh / (double)N, sumw / (double)N);

	for (int i = 0; i < N; i++) {
		printf("%d  ", student[i].num);
		if (student[i].height >= sumh / N && student[i].weight >= sumw / N) {
			printf("super");
		}
		else if (student[i].height < sumh / N && student[i].weight < sumw / N) {
			printf("below");
		}
		else {
			printf("average"); 
		}
		printf("\n");
	}
}
*/