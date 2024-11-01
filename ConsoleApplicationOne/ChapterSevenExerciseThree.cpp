#include <stdio.h>
int main(void)
{
	char ch;
	int evenCount = 0, oddCount = 0;
	int evenTotal = 0, oddTotal = 0;
	int intChValue;
	float evenAverage = 0.0f, oddAverage = 0.0f;
	printf("Please input numbers (0 for exit):");
	while (scanf_s("%d", &intChValue) == 1)
	{
		if (intChValue == 0)
			break;
		if (intChValue % 2 == 0)
		{
			evenCount++;
			evenTotal += intChValue;
		}
		else
		{
			oddCount++;
			oddTotal += intChValue;
		}
	}
	evenAverage = (float) evenTotal / evenCount;
	oddAverage = (float)oddTotal / oddCount;
	printf("even number count: %d, even number average: %.f\n odd number count: %d, odd number average: %.f", 
		evenCount, evenAverage, oddCount, oddAverage);
	return 0;
}