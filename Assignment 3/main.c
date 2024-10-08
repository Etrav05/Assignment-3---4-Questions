#include <stdio.h>

// EvanT - prog71990xf24 - assignment 3

int main(void) {

	printf("test 01:\n");
	if (testRunner(1.0, 2.0))
		printf("\n===== passed =====\n");
	else
		printf("\n===== fail =====\n");


	printf("\ntest 02:\n");
	if (testRunner(-1.0, 2.0))
		printf("\n===== passed =====\n");
	else
		printf("\n===== fail =====\n");


	printf("\ntest 03:\n");
	if (testRunner(0, 0))
		printf("\n===== passed =====\n");
	else
		printf("\n===== fail =====\n");

	return 0;
}