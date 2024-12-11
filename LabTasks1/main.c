#include<stdio.h>

#pragma warning (disable : 4996)  //This allows is to use scanf in vs

int main()
{
	printf("*----- Int numbers -----*\n");
	int ints[3];
	printf("Give me three ints:\n");
	scanf("%d %d %d", &ints[0], &ints[1], &ints[2]);
	for (int i = 0; i < 3; i++) {
		printf("|%d|\t|%-12d|\t|%12d|\n", ints[i], ints[i], ints[i]);
	}
	
	printf("*----- Long numbers -----*\n");
	long longs[3];
	printf("Give me three longs:\n");
	scanf("%ld %ld %ld", &longs[0], &longs[1], &longs[2]);
	for (int i = 0; i < 3; i++) {
		printf("|%ld|\t|%-14ld|\t|%+14ld|\n", longs[i], longs[i], longs[i]);
	}

	printf("*----- Unsigned Long numbers -----*\n");
	unsigned long unsigned_longs[3];
	printf("Give me three unsigned longs:\n");
	scanf("%lu %lu %lu", &unsigned_longs[0], &unsigned_longs[1], &unsigned_longs[2]);
	for (int i = 0; i < 3; i++) {
		printf("|%lu|\t|%-14lu|\t|%14lu|\n", unsigned_longs[i], unsigned_longs[i], unsigned_longs[i]);
	}

	printf("*----- Float numbers -----*\n");
	float floats[3];
	printf("Give me three floats:\n");
	scanf("%f %f %f", &floats[0], &floats[1], &floats[2]);
	for (int i = 0; i < 3; i++) {
		printf("|%f|\t|%-14.3f|\t|%e|\t|%+14.4e|\n", floats[i], floats[i], floats[i], floats[i]);
	}

	printf("*----- Double numbers -----*\n");
	double doubles[3];
	printf("Give me three doubles:\n");
	scanf("%lf %lf %lf", &doubles[0], &doubles[1], &doubles[2]);
	for (int i = 0; i < 3; i++) {
		printf("|%lf|\t|%-14.3lf|\t|%e|\t|%+14.4e|\n", doubles[i], doubles[i], doubles[i], doubles[i]);
	}
	return 0;
}