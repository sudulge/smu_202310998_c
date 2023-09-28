#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	
	double distance;

	printf("Please enter kilometers: ");
	scanf("%lf", &distance);
	printf("%.1f km is equal to %.1lf miles.", distance, distance / 1.609);

	return 0;
}