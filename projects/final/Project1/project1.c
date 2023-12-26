#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct {
	char class_name[50];
	char class_category[50];
	double class_score;
} Class;

int main() {

	Class class[5] = {
		{"GPU프로그래밍", "전공심화", 4.84},
		{"C프로그래밍1", "전공선택", 4.82},
		{"인공지능과미래사회", "교양선택", 4.75},
		{"파이썬프로그래밍", "전공선택", 4.65},
		{"SW융합개론", "전공선택", 4.61},
	};

	while (1) {
		char input_class_name[50];
		char input_class_category[50];
		int option;
		printf("=================\n");
		printf("1) 과목명 검색, 2) 과목구분별 검색, 3) 강의평가점수로 검색, 다른 숫자) 종료 >\n");
		printf("=================\n");

		scanf("%d", &option);

		switch (option) {
		case 1:
			printf("=================\n");
			printf("과목명을 입력하세요> ");
			scanf("%s", input_class_name);

			for (int i = 0; i < 5; i++) {
				if (!strcmp(&(&class[i])[0], input_class_name)) {
					printf("%s 과목은 %s(으)로 구분되며, 강의평가점수는 %lf점입니다.", input_class_name, (&class[i].class_category), (&class[i].class_score));
					break;
				}
			}
			break;
		case 2:
			scanf("%s", input_class_category);

			if (!strcmp(input_class_category, "전공심화") || !strcmp(input_class_category, "전공선택") || !strcmp(input_class_category, "교양선택")) {
				printf("%s 과목(들)은", input_class_category);
			}

			for (int i = 0; i < 5; i++) {
				if (!strcmp(&(&class[i])[1], input_class_category)) {
					printf(" %s(강의평가 %lf점),");
				}
			}
			printf("입니다.");
			break;
		case 3:
			break;
		}
	}

	
}