#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	char str[100];

	printf("Input> ");
	fgets(str, sizeof(str), stdin);

	for (int i = 0; i < strlen(str); i++) {
		if ('a' <= str[i] && str[i] <= 'z') {
			str[i] -= 32;
		}
		else if ('A' <= str[i] && str[i] <= 'Z') {
			str[i] += 32;
		}
	}

	printf("Output> ");
	fputs(str, stdout);

	return 0;
}