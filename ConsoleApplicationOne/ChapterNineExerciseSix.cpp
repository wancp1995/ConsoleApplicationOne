#include <stdio.h>
void orderNumbers(double *numberOne, double *numberTwo, double *numberThree);
int main(void)
{
	double numberOne, numberTwo, numberThree;
	printf("Enter three double numbers:");
	scanf_s("%lf %lf %lf", &numberOne, &numberTwo, &numberThree);
	printf("Data you input is %g , %g and %g\n", numberOne, numberTwo, numberThree);
	orderNumbers(&numberOne, &numberTwo, &numberThree);
	printf("After function. data is %g , %g and %g\n", numberOne, numberTwo, numberThree);
	return 0;
}
void orderNumbers(double* numberOne, double* numberTwo, double* numberThree)
{
	double temp;
	if (*numberOne > *numberTwo)
	{
		temp = *numberOne;
		*numberOne = *numberTwo;
		*numberTwo = temp;
	}
	if (*numberOne > *numberThree)
	{
		temp = *numberOne;
		*numberOne = *numberThree;
		*numberThree = temp;
	}
	if (*numberTwo > *numberThree)
	{
		temp = *numberTwo;
		*numberTwo = *numberThree;
		*numberThree = temp;
	}
}