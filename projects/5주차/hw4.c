#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	
	int n;
	int isPrime = 0;

	printf("Please enter a number: ");
	scanf("%d", &n);

	for (int i = 1; i < n; i++) {
		if (n == 1) {
			printf("1 in not a prime number. \n");
			break;
		}
		if (n % i == 0) {
			printf("It is a prime number. \n");
			isPrime = 1;
			break;
		}
	}

	if (!isPrime) {
		printf("It is not a prime number. \n");
	}
	
	return 0;
}