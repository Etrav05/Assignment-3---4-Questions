#include <stdio.h>

// EvanT - prog71990xf24 - assignment 3

#define ARRAY_LENGTH	10

int main(void) {

	printf("test 01:\n");

	double testRunningArray1[ARRAY_LENGTH] = {1.3, 4.5, 2.4, 6.7, 8.9, 2.9, 7.7, 5.1, 9.0, 0.1};
	double expected1 = 0.1 + 9.0;

	if (testRunner(testRunningArray1, expected1))
		printf("\n===== passed =====\n");
	else
		printf("\n===== fail =====\n");


	printf("\ntest 02:\n");

	double testRunningArray2[ARRAY_LENGTH] = { -1.3, 4.5, 2.4, -6.7, 8.9, 2.9, 7.7, -5.1, 9.0, -0.1 };
	double expected2 = -6.7 + 9.0;

	if (testRunner(testRunningArray2, expected2))
		printf("\n===== passed =====\n");
	else
		printf("\n===== fail =====\n");


	printf("\ntest 03:\n");

	double testRunningArray3[ARRAY_LENGTH] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	double expected3 = 0 + 0;

	if (testRunner(testRunningArray3, expected3))
		printf("\n===== passed =====\n");
	else
		printf("\n===== fail =====\n");

}