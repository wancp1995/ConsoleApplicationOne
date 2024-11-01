#include <stdio.h>
#define ROWS 3
#define COLS 5
void input_array(int rows, double ar[][COLS]);
double col_average(int rows, const double ar[]);
double array_average(int rows, const double ar[][COLS]);
double array_max_number(int rows, const double ar[][COLS]);
void show_result(int rows, const double ar[][COLS]);
int main()
{
	double array[ROWS][COLS];
	input_array(ROWS, array);
	show_result(ROWS, array);
	printf("\n");
	return 0;
}
void input_array(int rows, double ar[][COLS])
{
	int i, j;
	printf("Enter the array number.\n");
	for (i = 0; i < rows; i++)
	{
		printf("Enter five double number:\n");
		for (j = 0; j < COLS; j++)
		{
			scanf_s("%lf", &ar[i][j]);
		}
	}
}
double col_average(int cols, const double ar[])
{
	int i;
	double sum = 0;
	for (i = 0; i < cols; i++)
		sum += ar[i];
	return sum / cols;
}
double array_average(int rows, const double ar[][COLS])
{
	int i = 0;
	double sum = 0;
	for (i = 0; i < rows; i++)
		sum += col_average(COLS, ar[i]);
	return sum / rows;
}
double array_max_number(int rows, const double ar[][COLS])
{
	int i, j;
	double max = ar[0][0];
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			if (max < ar[i][j])
				max = ar[i][j];
		}
	}
	return max;
}
void show_result(int rows, const double ar[][COLS])
{
	int i, j;
	printf("The array you input is:\n");
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			printf("%g ", ar[i][j]);
		}
		printf("\n");
	}
	printf("The average of every column is:\n");
	for (i = 0; i < rows; i++)
	{
		printf("The %d column's average is %g.\n", i, col_average(COLS, ar[i]));
	}
	printf("The array's data average is %g.\n", array_average(ROWS, ar));
	printf("The max datum in the array is %g.\n", array_max_number(ROWS, ar));
}