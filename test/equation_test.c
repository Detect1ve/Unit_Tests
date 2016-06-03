#include "ctest.h"
#include "equation.h"

CTEST(roots, simple_test) {
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

CTEST(roots, a_is_zero) {
        //Given
        float a = 0;
        float b = 9;
        float c = 18;

        //When
        float x1, x2;
        int x = roots(a, b, c, &x1, &x2);

        //Then
        float expected_x1 = -2;
        float expected_x2 = -2;

        ASSERT_EQUAL(x, 1);
        ASSERT_EQUAL(expected_x1, x1);
        ASSERT_EQUAL(expected_x2, x2);
}

