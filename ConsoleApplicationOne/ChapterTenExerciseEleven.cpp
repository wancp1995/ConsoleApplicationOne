#include <stdio.h>
#define ROWS 3
#define COLS 5
void show_element(int rows, int cols, const int (*array)[COLS]);
void double_element(int rows, int cols,  int (*array)[COLS]);
int main(void)
{
	int array[ROWS][COLS] = {
		{ 1, 2, 3, 4, 5 },
		{ 6, 7, 8, 9, 10},
		{ 11, 12, 13, 14, 15 }
	};
	show_element(ROWS, COLS, array);
	double_element(ROWS, COLS, array);
	printf("\n");
	show_element(ROWS, COLS, array);
	return 0;
}
void show_element(int rows, int cols, const int (*array)[COLS])
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			printf("%d ", *(*(array + i) + j));
		}
		printf("\n");
	}
}
void double_element(int rows, int cols,  int (*array)[COLS])
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			*(*(array + i) + j) *= 2;
		}

	}
}