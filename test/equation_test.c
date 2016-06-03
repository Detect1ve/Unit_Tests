#include "ctest.h"
#include "equation.h"

CTEST(distance_suite, simple_test) {
	//Given
	float a = 1;
	float b = -2;
	float c = -3;
	
	//When
	float x1, x2;
	int x = roots(a, b, c, &x1, &x2);
	
	//Then
	float expected_x1 = 3;
	float expected_x2 = -1;
	
	ASSERT_EQUAL(x, 2);
	ASSERT_EQUAL(expected_x1, x1);
	ASSERT_EQUAL(expected_x2, x2);
}
