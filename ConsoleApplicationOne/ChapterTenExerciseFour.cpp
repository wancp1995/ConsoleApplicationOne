#include <stdio.h>
int maxIndexInArray(double array[], int n);
int main()
{
	double array[5] = { 1, 2, 3, 4, 5 };
	printf("The largest number in array is: %d\n", maxIndexInArray(array, 5));
	return 0;
}
int maxIndexInArray(double array[], int n)
{
	int i, maxIndex = 0;
	double maxValue = array[0];
	for (i = 1; i < n; i++)
	{
		if (maxValue < array[i])
		{
			maxValue = array[i];
			maxIndex = i;
		}
	}
	return maxIndex;
}