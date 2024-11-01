#include <stdio.h>
double sum(double, double);
int main(void)
{
	printf("The sum of %.1lf and %.1lf is %.1lf.\n", 3.0, 5.0, sum(3.0, 5.0));
	return 0;
}
double sum(double n, double m)
{
	return n + m;
}