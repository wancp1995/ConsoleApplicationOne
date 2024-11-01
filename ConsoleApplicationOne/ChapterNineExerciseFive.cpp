#include <stdio.h>
void larger_of(double *x, double *y);
int main(void)
{
	double numberOne, numberTwo;
	printf("Enter two double numbers:");
	scanf_s("%lf %lf", &numberOne, &numberTwo);
	printf("Data you input is %g and %g\n", numberOne, numberTwo);
	larger_of(&numberOne, &numberTwo);
	printf("After function. data is %g and %g\n", numberOne, numberTwo);
	return 0;
}
void larger_of(double* x, double* y)
{
	if (*x > *y)
		*y = *x;
	else
		*x = *y;
}