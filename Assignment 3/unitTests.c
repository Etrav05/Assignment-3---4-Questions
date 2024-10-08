#include <stdio.h>
#include <math.h>
#include "unitTests.h"
#include "SmallerOf.h"

// EvanT - prog71990f24 - assignment 3 - implemenation of the smallerOf unit test

bool testRunner(double a, double b) {
	
	double expected = smallerOf(a, b);

	if (expected == a || expected == b)  // test passed if expected a and expected b are both the same
		return true;
	else
		return false;
}