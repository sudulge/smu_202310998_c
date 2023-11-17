#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double getSTD(const int param[], int len) {
	int avg;
	int sum = 0;
	double squaresum = 0;
	double std;

	for (int i = 0; i < len; i++) {
		sum += param[i];
	}
	avg = sum / len;
	
	for (int i = 0; i < len; i++) {
		squaresum += pow(param[i] - avg, 2);
	}
	std = sqrt(squaresum / len);
	
	return std;
}

int main() {
	int arr[5];
	double std;

	printf("Enter 5 real numbers: ");

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		scanf(" %d", &arr[i]);
	}

	std = getSTD(arr, sizeof(arr) / sizeof(int));
	printf("Standard Deviation = %.3lf \n", std);
}