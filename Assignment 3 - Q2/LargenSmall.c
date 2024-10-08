#include <stdio.h>

// EvanT - prog71990xf24 - assignment 3 - question 2

#define ARRAY_LENGTH	10			// define the array length

double AddLargeNSmall(double array[]) {

	double large = array[0];        // initialize these variables as the first element of the array
	double small = array[0];

	for (int i = 0; i < ARRAY_LENGTH; i++) {

		double hold = i;		    // hold the value of the array for later

		if (i == 0)					// skip first value of array as the variables are already initalized at this value
			continue;

		if (large < array[i])	    // if large is less than the element, then large now equals this element
			large = array[i];

		if (small > array[i])	    // if small is greater than the element, then small now equals this element
			small = array[i];

	}

	printf("{ ");
	for (int i = 0; i < ARRAY_LENGTH; i++) {  // print for each i in array length = ARRAY_LENGTH
		if (i < ARRAY_LENGTH - 1)
			printf("%.1lf, ", array[i]);
		else
			printf("%.1lf ", array[i]);
	}

	printf("}");

	double SumOfLargeSmall = large + small; // add largest and smallest values
	printf("\nSum of largest and smallest values = %.1lf\n", SumOfLargeSmall);

	return SumOfLargeSmall;			

}