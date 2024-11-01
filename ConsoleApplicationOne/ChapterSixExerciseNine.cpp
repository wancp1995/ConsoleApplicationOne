#include <stdio.h>
double calculateResult(double firstValue, double secondValue);
int main(void)
{
	double firstValue, secondValue, result;
	printf("Please enter the two double data(separated by blank): ");
	scanf_s("%lf %lf", &firstValue, &secondValue);
	do
	{
		result = calculateResult(firstValue, secondValue);
		printf("firstNumber : %.2f , secondNumber: %.2f, result : %.2f\n", firstValue, secondValue, result);
		printf("Please enter the two double data(separated by blank): ");
	} while (scanf_s("%lf %lf", &firstValue, &secondValue) == 2);
	printf("Done!");
	return 0;
}
double calculateResult(double firstValue, double secondValue)
{
	double result;
	result = (secondValue - firstValue) / (firstValue * secondValue);
	return result;
}