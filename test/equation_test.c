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
        float a = 0;
        float b = 9;
        float c = 18;

        float x1, x2;
        int x = roots(a, b, c, &x1, &x2);

        float expected_x1 = -2;
        float expected_x2 = -2;

        ASSERT_EQUAL(x, 1);
        ASSERT_EQUAL(expected_x1, x1);
        ASSERT_EQUAL(expected_x2, x2);
}

CTEST(roots, a_and_b_zero) {
	float a = 0;
	float b = 0;
	float c = 5;

	float x1, x2;
	int x = roots(a, b, c, &x1, &x2);

	ASSERT_EQUAL(x, 0);
}

CTEST(roots, a_and_c_zero) {
	float a = 0;
	float b = 5;
	float c = 0;

	float x1, x2;
	int x = roots(a, b, c, &x1, &x2);

	float expected_x1 = 0;
	float expected_x2 = 0;

	ASSERT_EQUAL(x, 1);
	ASSERT_EQUAL(expected_x1, x1);
	ASSERT_EQUAL(expected_x2, x2);
}
CTEST(roots, c_zero) {
	float a = 1;
	float b = 9;
	float c = 0;

	float x1, x2;
	float x = roots(a, b, c, &x1, &x2);

	float expected_x1 = 0;
	float expected_x2 = -9;

	ASSERT_EQUAL(x, 2);
	ASSERT_EQUAL(expected_x1, x1);
	ASSERT_EQUAL(expected_x2, x2);
}
CTEST(roots, b_zero) {
	float a = 1;
	float b = 0;
	float c = -16;

	float x1, x2;
	float x = roots(a, b, c, &x1, &x2);

	float expected_x1 = 4;
	float expected_x2 = -4;

	ASSERT_EQUAL(x, 2);
	ASSERT_EQUAL(expected_x1, x1);
	ASSERT_EQUAL(expected_x2, x2);
}
CTEST(roots, b_and_c_zero) {
	float a = 81;
	float b = 0;
	float c = 0;

	float x1, x2;
	float x = roots(a, b, c, &x1, &x2);

	float expected_x1 = 0;
	float expected_x2 = 0;

	ASSERT_EQUAL(x, 1);
	ASSERT_EQUAL(expected_x1, x1);
	ASSERT_EQUAL(expected_x2, x2);
}
CTEST(roots, all_zero) {
	float a = 0;
	float b = 0;
	float c = 0;

	float x1, x2;
	float x = roots(a, b, c, &x1, &x2);

	ASSERT_EQUAL(x, 0);
}
CTEST(roots, all_negative) {
	float a = -2;
	float b = -4;
	float c = -2;

	float x1, x2;
	float x = roots(a, b, c, &x1, &x2);

	float expected_x1 = -1;
	float expected_x2 = -1;

	ASSERT_EQUAL(x, 1);
	ASSERT_EQUAL(expected_x1, x1);
	ASSERT_EQUAL(expected_x2, x2);
}
CTEST(roots, discr_negative) {
	float a = 2;
	float b = 1;
	float c = 4;

	float x1, x2;
	float x = roots(a, b, c, &x1, &x2);

	ASSERT_EQUAL(x, 0);
}
