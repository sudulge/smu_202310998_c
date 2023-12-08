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
		printf("그림 번호 선택(1.main, 2.flower, 3.castle, 기타:종료): ");
		scanf("%d", &option);

		if (!(0 < option && option < 4)) {
			printf("안녕히 가세요.\n");
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

		printf("오른쪽으로 몇 칸 이동할까요? ");
		scanf("%d", &right_move);
		printf("아래로 몇 줄 이동할까요? ");
		scanf("%d", &down_move);
		printf("선택한 그림을 해당 위치로부터 출력합니다.\n");

		for (int i = 0; i < down_move; i++) {
			printf("\n");
		}

		for (int i = 0; i < len / row_len; i++) {
			for (int j = 0; j < right_move; j++) {
				printf(" ");
			}

			printf("%s\n", asciiart + (i * row_len)); // 문자열의 시작 위치를 바꿔서 출력;
			//for (int k = 0; k < row_len; k++) {
			//	printf("%c", *((i * row_len) + asciiart + k));
			//}
			//printf("\n");
		}

		printf("\n");
	}
	return 0;
}

