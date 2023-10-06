#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	
	int price = 0;
	int sum = 0;
	char payment_method;
	char membership;

	printf("=== 네이버페이 결제 계산 프로그램 === \n");
	printf("주문액을 입력하세요: ");
	scanf(" %d", &price);


	printf("\n=== 결제 수단 목록 === \n");
	printf("a)NPay머니 네이버통장 충전결제 b)NPay머니 일반 충전결제 c)계좌 간편결제 \n");
	printf("d)네이버 현대카드 간편결제     e)청구할인 삼성카드결제  f)일반 카드결제 \n");
	
	while (1) {
		printf("결제 수단을 입력하세요: ");
		scanf(" %c", &payment_method);

		if (!(payment_method == 'a' || payment_method == 'b' || payment_method == 'c' || payment_method == 'd' || payment_method == 'e' || payment_method == 'f')) {
			printf("잘못 입력하셨습니다. 재입력 바랍니다.\n");
		}
		else {
			break;
		}
	}

	printf("\n네이버 멤버십에 가입되어 있나요? (y/n) ");
	scanf(" %c", &membership);

	if (membership == 'Y' || membership == 'y') {
		membership = 1;
	}
	else {
		membership = 0;
	}


	printf("\n === 결제 및 적립 내역 === \n");

	printf("주문금액 %d원 \n", price);

	if (payment_method == 'e' && price >= 50000) {
		if (price * 0.05 > 5000) {
			printf("청구할인 5000원 \n");
		}
		else {
			printf("청구할인 %d원 \n", (int)(price * 0.05));
		}
	}

	printf("기본 적립 %d원 \n", (int)(price * 0.01));
	sum += (int)(price * 0.01);

	if (payment_method == 'a' || payment_method == 'b') {
		printf("네이버페이 머니 결제적립 %d원 \n", (int)(price * 0.015));
		sum += (int)(price * 0.015);
	}
	
	if (payment_method == 'a') {
		printf("네이버통장 추가적립 %d원 \n", (int)(price * 0.005));
		sum += (int)(price * 0.005);
	}
	
	if (payment_method == 'd') {
		if (price * 0.05 > 10000) {
			printf("네이버 현대카드 추가적립 10000원 \n");
			sum += 10000;
		}
		else {
			printf("네이버 현대카드 추가적립 %d원 \n", (int)(price * 0.05));
			sum += (int)(price * 0.05);
		}
	}

	if (membership) {
		if (price > 200000) {
			if ((price - 200000) * 0.01 > 12000) {
				printf("네이버 멤버십 추가적립 20000원 \n");
				sum += 20000;
			}
			else {
				printf("네이버 멤버십 추가적립 %d원 \n", (int)(8000 + (price - 200000) * 0.01));
				sum += (int)(8000 + (price - 200000) * 0.01);
			}
		}
		else {
			printf("네이버 멤버십 추가적립 %d원 \n", (int)(price * 0.01));
			sum += (int)(price * 0.01);
		}
	}

	printf("총 적립액은 %d원입니다.\n", sum);

	return 0;
}