#include <stdio.h>
#define SIZE 5
void reserveArray(double array[], int n);
int main()
{
	int i;
	double array[SIZE] = { 1, 2, 3, 4, 5 };
	for (i = 0; i < SIZE; i++)
	{
		printf("%g ", array[i]);
	}
	printf("\n");
	reserveArray(array, SIZE);
	for (i = 0; i < SIZE; i++)
	{
		printf("%g ", array[i]);
	}
	printf("\n");
	return 0;
}
void reserveArray(double array[], int n)
{
	int i, j;
	double temp;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n -1 -i; j++)
		{
			if (array[j] < array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}