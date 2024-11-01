#include <stdio.h>
void Temperatures(double fahrenheit);
int main(void)
{
	double fahrenheit;
	printf("Enter fahrenheit to start:");
	int inputIsNumber = scanf_s("%lf",&fahrenheit);
	while (inputIsNumber == 1)
	{
		Temperatures(fahrenheit);
		printf("Enter next fahrenheit! (q to quit): ");
		inputIsNumber = scanf_s("%lf", &fahrenheit);
	}
	printf("Done!\n");
	return 0;
}
void Temperatures(double fahrenheit)
{
	const double F_TO_C = 32.0;
	const double C_TO_K = 273.16;
	double celsius, kelvin;
	celsius = 5.0 / 9.0 * (fahrenheit - F_TO_C);
	kelvin = celsius + C_TO_K;
	printf("fahrenheit: %.2f celsius: %.2f lelvin: %.2f\n",fahrenheit,celsius,kelvin);
}
