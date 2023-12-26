#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct {
	char class_name[50];
	char class_category[50];
	double class_score;
} Class;

int main() {
	int option;
	int flag;
	int run = 1;

	Class class[5] = {
		{"GPU프로그래밍", "전공심화", 4.84},
		{"C프로그래밍1", "전공선택", 4.82},
		{"인공지능과미래사회", "교양선택", 4.75},
		{"파이썬프로그래밍", "전공선택", 4.65},
		{"SW융합개론", "전공선택", 4.61}
	};

	while (run) {
		char input[50];
		double input_score;

		printf("1) 과목명 검색, 2) 과목구분별 검색, 3) 강의평가점수로 검색, 다른 숫자) 종료 >  ");
		scanf("%d", &option);

		switch (option) {
		case(1):
			flag = 0;

			printf("과목명을 입력하세요> ");
			scanf("%s", input);
			/*fgets(input, sizeof(input), stdin);*/

			for (int i = 0; i < 5; i++) {
				if (!strcmp(class[i].class_name, input)) {
					printf("%s 과목은 %s(으)로 구분되며, 강의평가 점수는 %.2lf점입니다.\n", class[i].class_name, class[i].class_category, class[i].class_score);
					flag = 1;
				}
			}

			if (!flag) {
				printf("%s 과목은 없습니다.\n", &input);
			}

			printf("\n");
			break;

		case(2):
			flag = 0;

			printf("과목구분을 입력하세요> ");
			scanf("%s", input);

			printf("%s 과목(들)은 ", input);

			for (int i = 0; i < 5; i++) {
				if (!strcmp(class[i].class_category, input)) {
					printf("%s(강의평가 %.2lf점), ", class[i].class_name, class[i].class_score);
					flag = 1;
				}
			}

			if (flag) {
				printf("입니다.\n");
			}
			else {
				printf("없습니다.\n");
			}

			printf("\n");
			break;

		case(3):
			flag = 0;

			printf("강의평가점수 몇 점 이상의 과목을 검색하고자 하나요? > ");
			scanf("%lf", &input_score);

			printf("%.2lf점 이상의 강의평가점수를 받은 과목(들)은 ", input_score);

			for (int i = 0; i < 5; i++) {
				if (class[i].class_score >= input_score) {
					printf("%s(%s, 강의평가 %.2lf점), ", class[i].class_name, class[i].class_category, class[i].class_score);
					flag = 1;
				}
			}

			if (flag) {
				printf("입니다.\n");
			}
			else {
				printf("없습니다.\n");
			}

			printf("\n");
			break;

		default:
			printf("지금까지 S모대학교 N모교수의 강의과목 정보를 출력해 주는 프로그램이였습니다. 그럼 안녕히 계세요~");
			run = 0;
			break;
		}
	}
}