#include <stdio.h>
#include "SmallerOf.h"

// EvanT - prog71990xf24 - assignment 3 - question 1

double smallerOf(double a, double b) {  // defining the function

	printf("Before: a = %lf, b = %lf\n", a, b);

	if (a < b)
		b = a;

	else
		a = b;

	printf("After: a = %lf, b = %lf\n", a, b);

	return a; // this is so that our test can have a value to be based on, since b = a, either can be returned
	}