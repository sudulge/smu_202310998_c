#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int binary(int num) {
	if (num > 1) {
		binary(num / 2);
	}
	printf("%d", num % 2);
}

int main(void) {
	int num;
	printf("���� ������ �Է��ϼ���: ");
	scanf("%d", &num);
	binary(num);
	return 0;
}