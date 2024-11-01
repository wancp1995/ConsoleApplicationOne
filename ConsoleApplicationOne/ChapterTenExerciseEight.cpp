#include <stdio.h>
#define SIZE 3
void copy_ptr(double* targetArray, double* source, int n);
int main(void)
{
	double source[7] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };
	double targetOne[SIZE];
	int i;
	copy_ptr(targetOne, source + 2, SIZE);
	for (i = 0; i < SIZE; i++)
		printf("%g ", targetOne[i]);
	printf("\n");
	return 0;
}
void copy_ptr(double targetArray[], double source[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		*(targetArray + i) = *(source + i);
}