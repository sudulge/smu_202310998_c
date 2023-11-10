#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arr1[6] = {1, 2, 3, 4, 5, 6};
	int arr2[6] = {7, 8, 9, 10, 11, 12};

	int* ptr1 = arr1;
	int* ptr2 = arr2;
	int temp;
	
	printf("arr1: ");
	for (int i = 0; i < sizeof(arr1) / sizeof(int); i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");

	printf("arr2: ");
	for (int i = 0; i < sizeof(arr2) / sizeof(int); i++) {
		printf("%d ", arr2[i]);
	}
	printf("\n\n");

	printf("after swap \n");

	for (int i = 0; i < sizeof(arr1) / sizeof(int); i++) {
		temp = *(ptr1 + i);
		*(ptr1 + i) = *(ptr2 + i);
		*(ptr2 + i) = temp;
	}

	printf("arr1: ");
	for (int i = 0; i < sizeof(arr1) / sizeof(int); i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");

	printf("arr2: ");
	for (int i = 0; i < sizeof(arr2) / sizeof(int); i++) {
		printf("%d ", arr2[i]);
	}
	printf("\n\n");

	return 0;
}