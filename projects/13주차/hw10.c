#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX_STRING_SIZE 30


typedef struct city {
	char name[MAX_STRING_SIZE];
	char country[MAX_STRING_SIZE];
	int population;
} City;

int main() {

	City arr[3];

	printf("Input three cities: \n");

	for (int i = 0; i < 3; i++) {
		printf("Name> "); scanf(" %[^\n]s", arr[i].name);
		printf("Country> "); scanf(" %[^\n]s", arr[i].country);
		printf("Population> "); scanf(" %d", &arr[i].population);
	}

	printf("\nPrinting the three cities: \n");

	for (int i = 0; i < 3; i ++) {
		printf("%d. %s in %s with a population of %d people \n", i + 1, arr[i].name, arr[i].country, arr[i].population);
	}
	return 0;
}

