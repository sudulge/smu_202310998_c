#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "ascii_art.h"

int main(void) {
	int option;
	int right_move;
	int down_move;
	char* asciiart = NULL;
	int len;
	int row_len;

	while (1) {
		printf("�׸� ��ȣ ����(1.main, 2.flower, 3.castle, ��Ÿ:����): ");
		scanf("%d", &option);

		if (!(0 < option && option < 4)) {
			printf("�ȳ��� ������.\n");
			break;
		}

		switch (option) {
		case 1:
			asciiart = &ascii_main[0][0];
			len = sizeof(ascii_main);
			row_len = sizeof(ascii_main[0]);
			break;
		case 2:
			asciiart = &ascii_flower[0][0];
			len = sizeof(ascii_flower);
			row_len = sizeof(ascii_flower[0]);
			break;
		case 3:
			asciiart = &ascii_castle[0][0];
			len = sizeof(ascii_castle);
			row_len = sizeof(ascii_castle[0]);
			break;
		}

		printf("���������� �� ĭ �̵��ұ��? ");
		scanf("%d", &right_move);
		printf("�Ʒ��� �� �� �̵��ұ��? ");
		scanf("%d", &down_move);
		printf("������ �׸��� �ش� ��ġ�κ��� ����մϴ�.\n");

		for (int i = 0; i < down_move; i++) {
			printf("\n");
		}

		for (int i = 0; i < len / row_len; i++) {
			for (int j = 0; j < right_move; j++) {
				printf(" ");
			}

			printf("%s\n", asciiart + (i * row_len)); // ���ڿ��� ���� ��ġ�� �ٲ㼭 ���;
			//for (int k = 0; k < row_len; k++) {
			//	printf("%c", *((i * row_len) + asciiart + k));
			//}
			//printf("\n");
		}

		printf("\n");
	}
	return 0;
}

