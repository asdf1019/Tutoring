/*
#include <stdio.h>

struct student {
	int num;
	char blood;
	double eye;
} studentinfo[5];

int main() {
	
	for (int i = 0; i < 5; i++) {
		printf("%d번 학생의 정보를 입력하세요", i + 1);
		scanf("%d %c %lf", &studentinfo[i].num, &studentinfo[i].blood, &studentinfo[i].eye);
	}

	for (int i = 0; i < 5; i++) {
		printf("%d번 학생 : ", i + 1);
		printf("%d %c %lf\n", studentinfo[i].num, studentinfo[i].blood, studentinfo[i].eye);
	}

}
*/