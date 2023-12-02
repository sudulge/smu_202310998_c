#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>


typedef struct city {
	char name[20];
	char country[20];
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

