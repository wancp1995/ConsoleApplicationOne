#include <stdio.h>
#define ROWS 2
#define COLS 4
void copy_arr(double targetArray[], double source[], int n);
void copy_ptr(double* targetArray, double* source, int n);
void copy_ptrs(double* targetArray, double* sourceFirst, double* sourceLast);
void copy_2d_array(double target[][COLS], double source[][COLS], int n);
void copy_2d_ptr(double (*target)[COLS], double (*source)[COLS], int n);
int main(void)
{
	int i, j;
	double targetOne[ROWS][COLS], targetTwo[ROWS][COLS], source[ROWS][COLS] = {{1.1, 2.2, 3.3, 4.4}, {5.5, 6.6, 7.7, 8.8}};
	copy_2d_array(targetOne, source, 2);
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			printf("%g ", targetOne[i][j]);
		}
		printf("\n");
	}
	printf("\n\n\n");
	copy_2d_ptr(targetTwo, source, 2);
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			printf("%g ", targetTwo[i][j]);
		}
		printf("\n");
	}
	return 0;
}
void copy_2d_array(double target[][COLS],double source[][COLS], int n)
{
	int i;
	for (i = 0; i < n; i++)
		copy_arr(target[i], source[i], COLS);
}
void copy_2d_ptr(double (*target)[COLS], double (*source)[COLS], int n)
{
	int i;
	for (i = 0; i < n; i++)
		copy_ptr(*(target + i), *(source + i), COLS);
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
		*(targetArray + i) = *(source + i);
}
void copy_ptrs(double* targetArray, double* sourceFirst, double* sourceLast)
{
	int i;
	for (i = 0; sourceFirst + i < sourceLast; i++)
		*(targetArray + i) = *(sourceFirst + i);
}

