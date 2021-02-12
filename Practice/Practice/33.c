/*
#include <stdio.h>

struct number {
	char name[10];
	int num;
} info[10];

int main() {

	char name[10];
	

	for (int i = 0; i < 10; i++) {
		printf("%d번의 이름과 전화번호를 입력하세요", i + 1);
		scanf("%s %d", &info[i].name, &info[i].num);
	}

	printf("이름을 입력하세요 : ");
	scanf("%s", &name);

	for (int i = 0; i < 10; i++) {
		if (name == info[i].name) {
			printf("%d", info[i].num);
			break;
		}
	}

}
*/