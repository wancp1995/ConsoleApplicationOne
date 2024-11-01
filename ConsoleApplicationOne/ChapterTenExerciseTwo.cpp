#include <stdio.h>
void copy_arr(double targetArray[], double source[], int n);
void copy_ptr(double * targetArray, double * source, int n);
void copy_ptrs(double * targetArray, double * sourceFirst, double * sourceLast);
int main(void)
{
	double source[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double targetOne[5];
	double targetTwo[5];
	double targetThree[5];
	int i;
	copy_arr(targetOne, source, 5);
	copy_ptr(targetTwo, source, 5);
	copy_ptrs(targetThree, source, source + 5);
	for (i = 0; i < 5; i++)
		printf("%lf ", targetOne[i]);
	printf("\n");
	for (i = 0; i < 5; i++)
		printf("%lf ", targetTwo[i]);
	printf("\n");
	for (i = 0; i < 5; i++)
		printf("%lf ", targetThree[i]);
	printf("\n");
	return 0;
}
void copy_arr(double targetArray[], double source[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		targetArray[i] = source[i];
}

void copy_ptr(double targetArray[], double source[], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
		*(targetArray + i) = * (source + i);
}
void copy_ptrs(double* targetArray, double* sourceFirst, double* sourceLast)
{
	int i;
	for (i = 0; sourceFirst + i < sourceLast; i++)
		*(targetArray + i) = * (sourceFirst + i);
}		

