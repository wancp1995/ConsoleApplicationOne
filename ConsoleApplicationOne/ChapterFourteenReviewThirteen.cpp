#include <stdio.h>
double sum(double numOne,double numTwo);
double diff(double numOne, double numTwo);
double times(double numOne, double numTwo);
double divide(double numOne, double numTwo);
int main(void)
{
	double (*pf[4])(double numOne, double numTwo) = {sum , diff, times, divide};
	double result = pf[1](10.0, 2.5);
	printf("result is: %.2lf\n", result);
	return 0;
}
double sum(double numOne, double numTwo)
{
	return numOne + numTwo;
}
double diff(double numOne, double numTwo)
{
	return numOne - numTwo;
}
double times(double numOne, double numTwo)
{
	return numOne * numTwo;
}
double divide(double numOne, double numTwo)
{
	return numOne / numTwo;
}