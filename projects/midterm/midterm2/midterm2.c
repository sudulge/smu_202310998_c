#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	printf("=== ���̽��� �׸��� ���α׷� === \n");
	while (1) {
		int size;
		printf("���̽����� ũ�⸦ 3 �̻��� Ȧ���� �Է��ϼ���: ");
		scanf("%d", &size);
		
		if (size % 2 == 0 || size < 3) {
			printf("���̽����� ũ�Ⱑ ������ ����ϴ�. (¦�� �Ǵ� 3 �̸�) \n\n");
			continue;
		}
		for (int i = 0; i < size; i++) {
			printf("*");
		}
		printf("\n");
		for (int j = 0; j < size - 2; j++) {
			printf("*");
			for (int k = 0; k < (size - 3) / 2; k++) {
				printf(" ");
			}
			printf("*");
			for (int k = 0; k < (size - 3) / 2; k++) {
				printf(" ");
			}
			printf("*");
			printf("\n");
		}
		for (int i = 0; i < size; i++) {
			printf("*");
		}
		printf("\n");
		for (int i = 0; i < size / 5; i++) {
			for (int j = 0; j < size / 2; j++) {
				printf(" ");
			}
			printf("| \n");
		}
		break;
	}
}