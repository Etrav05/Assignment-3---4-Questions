#include <stdio.h>
#include <stdbool.h>
#include "unitTests.h"
#include "LargenSmall.h"

bool testRunner(double array[], double expected) {  // type - name (array that is being worked on, expected value)

	double result = AddLargeNSmall(array);  // save the result of the AddLargeNSmall function

	if (result == expected)  // if this result is == the manually inputted expected value, return true
		return true;
	else
		return false;
}
