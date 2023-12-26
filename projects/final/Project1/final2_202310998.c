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
		{"GPU���α׷���", "������ȭ", 4.84},
		{"C���α׷���1", "��������", 4.82},
		{"�ΰ����ɰ��̷���ȸ", "���缱��", 4.75},
		{"���̽����α׷���", "��������", 4.65},
		{"SW���հ���", "��������", 4.61}
	};

	while (run) {
		char input[50];
		double input_score;

		printf("1) ����� �˻�, 2) ���񱸺к� �˻�, 3) ������������ �˻�, �ٸ� ����) ���� >  ");
		scanf("%d", &option);

		switch (option) {
		case(1):
			flag = 0;

			printf("������� �Է��ϼ���> ");
			scanf("%s", input);
			/*fgets(input, sizeof(input), stdin);*/

			for (int i = 0; i < 5; i++) {
				if (!strcmp(class[i].class_name, input)) {
					printf("%s ������ %s(��)�� ���еǸ�, ������ ������ %.2lf���Դϴ�.\n", class[i].class_name, class[i].class_category, class[i].class_score);
					flag = 1;
				}
			}

			if (!flag) {
				printf("%s ������ �����ϴ�.\n", &input);
			}

			printf("\n");
			break;

		case(2):
			flag = 0;

			printf("���񱸺��� �Է��ϼ���> ");
			scanf("%s", input);

			printf("%s ����(��)�� ", input);

			for (int i = 0; i < 5; i++) {
				if (!strcmp(class[i].class_category, input)) {
					printf("%s(������ %.2lf��), ", class[i].class_name, class[i].class_score);
					flag = 1;
				}
			}

			if (flag) {
				printf("�Դϴ�.\n");
			}
			else {
				printf("�����ϴ�.\n");
			}

			printf("\n");
			break;

		case(3):
			flag = 0;

			printf("���������� �� �� �̻��� ������ �˻��ϰ��� �ϳ���? > ");
			scanf("%lf", &input_score);

			printf("%.2lf�� �̻��� ������������ ���� ����(��)�� ", input_score);

			for (int i = 0; i < 5; i++) {
				if (class[i].class_score >= input_score) {
					printf("%s(%s, ������ %.2lf��), ", class[i].class_name, class[i].class_category, class[i].class_score);
					flag = 1;
				}
			}

			if (flag) {
				printf("�Դϴ�.\n");
			}
			else {
				printf("�����ϴ�.\n");
			}

			printf("\n");
			break;

		default:
			printf("���ݱ��� S����б� N�𱳼��� ���ǰ��� ������ ����� �ִ� ���α׷��̿����ϴ�. �׷� �ȳ��� �輼��~");
			run = 0;
			break;
		}
	}
}