#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100
#define THIRDSIZE 300
void set_array(double* data, int num);
void show_array(const double ar[], int n);
int main(void)
{
	double data1[SIZE] = {0}, data2[THIRDSIZE];
	set_array(data2, THIRDSIZE);
	puts("values (original data):");
	show_array(data1, SIZE);
	memcpy(data1, data2, SIZE * sizeof(double));
	puts("Using memcpy() (0 - 100):");
	show_array(data1, SIZE);
	puts("\nUsing memcpy() (200 - 300):");
	memcpy(data1, data2 + 200 , SIZE * sizeof(double));
	show_array(data1, SIZE);
	return 0;
}
void set_array(double *data, int num)
{
	for (int i = 0; i < num; i++)
	{
		data[i] = i;
	}
}
void show_array(const double ar[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%g ", ar[i]);
		if (i % 10 == 9)
			putchar('\n');
	}

	putchar('\n');
}