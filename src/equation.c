#include <stdio.h>
#include <math.h>
#include "equation.h"

int roots (float a, float b, float c, float *x1, float *x2)
{
	float d;

	if (a == 0)
	{
		*x1 = *x2 = -c / b;
		return 1;
	}
	d = b * b - 4 * a * c;
        if (d == 0)
	{
		*x1 = *x2 = - b / (2 * a);
                return 1;
	}
	else
	{
		*x1 = (- b + sqrt(d)) / (2 * a);
		*x2 = (- b - sqrt(d)) / (2 * a);
		return 2;
	}
	return 0;
}
