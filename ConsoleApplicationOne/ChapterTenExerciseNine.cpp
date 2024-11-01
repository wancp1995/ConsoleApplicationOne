#include <stdio.h>
#define N 3
#define M 5
void copy_array(int n, int m, double target[][M], const double source[][M]);
void show_array(int n, int m, const double array[][M]);
int main(void)
{
	int n = 3;
	int m = 5;
	double target[N][M], source[][5] = {
		{ 0.2, 0.4, 2.4, 3.5, 6.6 },
		{ 0.5, 8.2, 1.2, 1.6, 2.4 },
		{ 9.1, 8.5, 2.3, 6.1, 8.4 }
	};
	copy_array(n,m,target,source);
	show_array(n,m,target);
	return 0;
}
void copy_array(int n, int m, double target[][M], const double source[][M])
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			target[i][j] = source[i][j];
}
void show_array(int n, int m, const double array[][M])
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%g ", array[i][j]);
		}
		printf("\n");
	}
}