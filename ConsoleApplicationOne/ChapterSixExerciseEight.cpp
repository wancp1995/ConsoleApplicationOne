#include <stdio.h>
int main(void)
{
	double firstValue, secondValue, result;
	printf("Please enter the two double data(separated by blank): ");
	scanf_s("%lf %lf", &firstValue, &secondValue);
	do
	{
		result = (secondValue - firstValue) / (firstValue * secondValue);
		printf("firstNumber : %.2f , secondNumber: %.2f, result : %.2f\n", firstValue, secondValue, result);
		printf("Please enter the two double data(separated by blank): ");
	} while (scanf_s("%lf %lf", &firstValue, &secondValue) == 2);
	printf("Done!");
	return 0;
}