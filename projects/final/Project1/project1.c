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
		{"GPU���α׷���", "������ȭ", 4.84},
		{"C���α׷���1", "��������", 4.82},
		{"�ΰ����ɰ��̷���ȸ", "���缱��", 4.75},
		{"���̽����α׷���", "��������", 4.65},
		{"SW���հ���", "��������", 4.61},
	};

	while (1) {
		char input_class_name[50];
		char input_class_category[50];
		int option;
		printf("=================\n");
		printf("1) ����� �˻�, 2) ���񱸺к� �˻�, 3) ������������ �˻�, �ٸ� ����) ���� >\n");
		printf("=================\n");

		scanf("%d", &option);

		switch (option) {
		case 1:
			printf("=================\n");
			printf("������� �Է��ϼ���> ");
			scanf("%s", input_class_name);

			for (int i = 0; i < 5; i++) {
				if (!strcmp(&(&class[i])[0], input_class_name)) {
					printf("%s ������ %s(��)�� ���еǸ�, ������������ %lf���Դϴ�.", input_class_name, (&class[i].class_category), (&class[i].class_score));
					break;
				}
			}
			break;
		case 2:
			scanf("%s", input_class_category);

			if (!strcmp(input_class_category, "������ȭ") || !strcmp(input_class_category, "��������") || !strcmp(input_class_category, "���缱��")) {
				printf("%s ����(��)��", input_class_category);
			}

			for (int i = 0; i < 5; i++) {
				if (!strcmp(&(&class[i])[1], input_class_category)) {
					printf(" %s(������ %lf��),");
				}
			}
			printf("�Դϴ�.");
			break;
		case 3:
			break;
		}
	}

	
}