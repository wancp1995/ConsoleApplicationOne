#include <stdio.h>
double maxRangenArray(double array[], int n);
int main()
{
	double array[5] = { 1, 2, 3, 4, 5 };
	printf("The largest number in array is: %.1lf\n", maxRangenArray(array, 5));
	return 0;
}
double maxRangenArray(double array[], int n)
{
	int i;
	double maxValue = array[0], minValue = array[0];
	for (i = 1; i < n; i++)
	{
		if (maxValue < array[i])
		{
			maxValue = array[i];
		}
		if (minValue > array[i])
		{
			minValue = array[i];
		}
	}
	return maxValue - minValue;
}