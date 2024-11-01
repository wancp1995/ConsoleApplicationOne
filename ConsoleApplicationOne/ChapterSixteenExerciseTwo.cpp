#include <stdio.h>
#define PR(X, Y) (2.0 / ((1.0/(X))+(1.0/(Y))))
int main(void)
{
	double numOne, numTwo, result;
	printf("Please enter two double number:");
	scanf_s("%lf %lf", &numOne, &numTwo);
	result = PR(numOne, numTwo);
	printf("PR(%.1lf, %.1lf) is %.1lf\n", numOne, numTwo, result);
	return 0;
}