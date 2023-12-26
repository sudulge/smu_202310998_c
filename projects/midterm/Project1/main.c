#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int balance = 1000000;

void deposit(unsigned int money) {
	balance += money;
	printf("입금이 완료되었습니다. \n");
	printf("현재 잔고는 %d원입니다. \n\n", balance);
}

void withdraw(unsigned int money) {
	if (balance < money) {
		printf("잔액이 부족합니다. \n");
		printf("현재 잔고는 %d원입니다. \n\n", balance);
	}
	else {
		balance -= money;
		printf("출금이 완료되었습니다. \n");
		printf("현재 잔고는 %d원입니다. \n\n", balance);
	}
}

void check_balance() {
	printf("현재 잔고는 %d원입니다. \n\n", balance);
}



int main() {
	printf("===== ㅅㅁ은행 ATM기입니다. ===== \n");
	int quit = 1;

	while (quit) {
		int option;

		printf("1. 입금 \n");
		printf("2. 출금 \n");
		printf("3. 잔액 조회 \n");
		printf("4. 종료 \n");
		
		printf("원하는 작업 번호를 선택하세요: ");
		scanf("%d", &option);
		
		if (0 < option && option < 5) {
			int money;
			switch (option) {
			case 1:
				printf("입금할 금액을 입력하세요: ");
				scanf("%d", &money);
				deposit(money);
				continue;
			case 2:
				printf("출금할 금액을 입력하세요: ");
				scanf("%d", &money);
				withdraw(money);
				continue;
			case 3:
				check_balance();
				continue;
			case 4:
				printf("안녕히 가세요.");
				quit = 0;
				break;
			}

		}
		else {
			printf("올바른 작업 번호를 선택하세요. \n\n");
		}
	}
}