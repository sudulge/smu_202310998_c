#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int balance = 1000000;

void deposit(unsigned int money) {
	balance += money;
	printf("�Ա��� �Ϸ�Ǿ����ϴ�. \n");
	printf("���� �ܰ�� %d���Դϴ�. \n\n", balance);
}

void withdraw(unsigned int money) {
	if (balance < money) {
		printf("�ܾ��� �����մϴ�. \n");
		printf("���� �ܰ�� %d���Դϴ�. \n\n", balance);
	}
	else {
		balance -= money;
		printf("����� �Ϸ�Ǿ����ϴ�. \n");
		printf("���� �ܰ�� %d���Դϴ�. \n\n", balance);
	}
}

void check_balance() {
	printf("���� �ܰ�� %d���Դϴ�. \n\n", balance);
}



int main() {
	printf("===== �������� ATM���Դϴ�. ===== \n");
	int quit = 1;

	while (quit) {
		int option;

		printf("1. �Ա� \n");
		printf("2. ��� \n");
		printf("3. �ܾ� ��ȸ \n");
		printf("4. ���� \n");
		
		printf("���ϴ� �۾� ��ȣ�� �����ϼ���: ");
		scanf("%d", &option);
		
		if (0 < option && option < 5) {
			int money;
			switch (option) {
			case 1:
				printf("�Ա��� �ݾ��� �Է��ϼ���: ");
				scanf("%d", &money);
				deposit(money);
				continue;
			case 2:
				printf("����� �ݾ��� �Է��ϼ���: ");
				scanf("%d", &money);
				withdraw(money);
				continue;
			case 3:
				check_balance();
				continue;
			case 4:
				printf("�ȳ��� ������.");
				quit = 0;
				break;
			}

		}
		else {
			printf("�ùٸ� �۾� ��ȣ�� �����ϼ���. \n\n");
		}
	}
}