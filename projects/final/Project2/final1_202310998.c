#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int displayString(char str[], int cnt) {

	for (int j = 0; j < strlen(str)-1 - cnt; j++) {
		printf("%c", str[cnt + j]);
	}
		
	for (int j = 0; j < cnt; j++) {
		printf("%c", str[j]);
	}
	printf("\n");

}

int func(char str[]) {
	printf("%s", str);
}
int main() {
	char str[50];
	printf("문자열을 입력하세요: ");

	fgets(str, sizeof(str), stdin);
	for (int i = 0; i < strlen(str); i++) {
		displayString(str, i);
	}



}