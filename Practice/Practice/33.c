/*
#include <stdio.h>

struct number {
	char name[10];
	int num;
} info[10];

int main() {

	char name[10];
	

	for (int i = 0; i < 10; i++) {
		printf("%d���� �̸��� ��ȭ��ȣ�� �Է��ϼ���", i + 1);
		scanf("%s %d", &info[i].name, &info[i].num);
	}

	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", &name);

	for (int i = 0; i < 10; i++) {
		if (name == info[i].name) {
			printf("%d", info[i].num);
			break;
		}
	}

}
*/