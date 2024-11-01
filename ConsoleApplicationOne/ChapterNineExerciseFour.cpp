#include <stdio.h>
#include <math.h>
double harmonicMean(double numberOne, double numberTwo);
int main(void)
{
	double numberOne, numberTwo;
	printf("Please enter two double numbers to calculate reciprocal:");
	scanf_s("%lf %lf", &numberOne, &numberTwo);
	printf("%g and %g harmonicMean is %g", numberOne, numberTwo, harmonicMean(numberOne, numberTwo));
	return 0;
}
double harmonicMean(double numberOne, double numberTwo)
{
	double numberOneReciprocal = pow(numberOne, -1);
	double numberTwoReciprocal = pow(numberTwo, -1);
	double numberReciprocalAverage = (numberOneReciprocal + numberTwoReciprocal) / 2.0;
	double result = pow(numberReciprocalAverage, -1);
	return result;
}