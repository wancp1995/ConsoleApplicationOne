#include <stdio.h>
double min(double x, double y);
int main(void)
{
	double x, y;
	printf("Enter two double numbers:");
	scanf_s("%lf %lf", &x, &y);
	printf("in two double numbers(%g %g), min number is %g", x, y, min(x, y));
	return 0;
}
double min(double x, double y)
{
	return x > y ? y : x;
}