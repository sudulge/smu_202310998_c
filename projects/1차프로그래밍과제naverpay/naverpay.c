#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	
	int price = 0;
	int sum = 0;
	char payment_method;
	char membership;

	printf("=== ���̹����� ���� ��� ���α׷� === \n");
	printf("�ֹ����� �Է��ϼ���: ");
	scanf(" %d", &price);


	printf("\n=== ���� ���� ��� === \n");
	printf("a)NPay�Ӵ� ���̹����� �������� b)NPay�Ӵ� �Ϲ� �������� c)���� ������� \n");
	printf("d)���̹� ����ī�� �������     e)û������ �Ｚī�����  f)�Ϲ� ī����� \n");
	
	while (1) {
		printf("���� ������ �Է��ϼ���: ");
		scanf(" %c", &payment_method);

		if (!(payment_method == 'a' || payment_method == 'b' || payment_method == 'c' || payment_method == 'd' || payment_method == 'e' || payment_method == 'f')) {
			printf("�߸� �Է��ϼ̽��ϴ�. ���Է� �ٶ��ϴ�.\n");
		}
		else {
			break;
		}
	}

	printf("\n���̹� ����ʿ� ���ԵǾ� �ֳ���? (y/n) ");
	scanf(" %c", &membership);

	if (membership == 'Y' || membership == 'y') {
		membership = 1;
	}
	else {
		membership = 0;
	}


	printf("\n === ���� �� ���� ���� === \n");

	printf("�ֹ��ݾ� %d�� \n", price);

	if (payment_method == 'e' && price >= 50000) {
		if (price * 0.05 > 5000) {
			printf("û������ 5000�� \n");
		}
		else {
			printf("û������ %d�� \n", (int)(price * 0.05));
		}
	}

	printf("�⺻ ���� %d�� \n", (int)(price * 0.01));
	sum += (int)(price * 0.01);

	if (payment_method == 'a' || payment_method == 'b') {
		printf("���̹����� �Ӵ� �������� %d�� \n", (int)(price * 0.015));
		sum += (int)(price * 0.015);
	}
	
	if (payment_method == 'a') {
		printf("���̹����� �߰����� %d�� \n", (int)(price * 0.005));
		sum += (int)(price * 0.005);
	}
	
	if (payment_method == 'd') {
		if (price * 0.05 > 10000) {
			printf("���̹� ����ī�� �߰����� 10000�� \n");
			sum += 10000;
		}
		else {
			printf("���̹� ����ī�� �߰����� %d�� \n", (int)(price * 0.05));
			sum += (int)(price * 0.05);
		}
	}

	if (membership) {
		if (price > 200000) {
			if ((price - 200000) * 0.01 > 12000) {
				printf("���̹� ����� �߰����� 20000�� \n");
				sum += 20000;
			}
			else {
				printf("���̹� ����� �߰����� %d�� \n", (int)(8000 + (price - 200000) * 0.01));
				sum += (int)(8000 + (price - 200000) * 0.01);
			}
		}
		else {
			printf("���̹� ����� �߰����� %d�� \n", (int)(price * 0.01));
			sum += (int)(price * 0.01);
		}
	}

	printf("�� �������� %d���Դϴ�.\n", sum);

	return 0;
}