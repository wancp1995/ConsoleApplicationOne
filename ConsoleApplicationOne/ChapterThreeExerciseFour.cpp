#include <stdio.h>
int main(void)
{
	float floatValue;
	printf("Enter a floating-point value: ");
	scanf_s("%f", &floatValue);
	printf("fixed-point notation: %f\n", floatValue);
	printf("exponential notation: %e\n", floatValue);
	printf("p notation: %a\n", floatValue);
	return 0;
}