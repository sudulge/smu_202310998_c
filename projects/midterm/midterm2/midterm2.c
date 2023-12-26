#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	printf("=== 아이스바 그리기 프로그램 === \n");
	while (1) {
		int size;
		printf("아이스바의 크기를 3 이상의 홀수로 입력하세요: ");
		scanf("%d", &size);
		
		if (size % 2 == 0 || size < 3) {
			printf("아이스바의 크기가 범위를 벗어납니다. (짝수 또는 3 미만) \n\n");
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