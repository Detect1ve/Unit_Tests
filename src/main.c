#include <stdio.h>

int main()
{
        float a, b, c, x1, x2;
	int check;
	printf("Input value: ");
	scanf("%f %f %f", &a, &b, &c);
	check = roots(a, b, c, &x1, &x2);
	printf("%.6f %.6f\n", x1, x2);
        return 0;
}
