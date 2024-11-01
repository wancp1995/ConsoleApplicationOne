#include <stdio.h>
#define CM_PER_FEET 30.48
#define CM_PER_INCH 2.54
int main(void)
{
	float cm, inches;
	int feets;
	printf("Enter a height in centimeters:");
	scanf_s("%f", &cm);
	while (cm > 0)
	{
		feets = (int) (cm / CM_PER_FEET);
		inches = (cm - feets * CM_PER_FEET) / CM_PER_INCH;
		printf("%.1f cm = %d feets, %.1f inches.\n", cm, feets, inches);
		printf("Enter a height in centimeters (<=0 to quit):");
		scanf_s("%f", &cm);
	}
	printf("bye");
	return 0;
}