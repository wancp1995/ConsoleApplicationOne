#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
void sort(int array[], int n);
int main()
{
	int data[SIZE];
	srand((unsigned int) time(0));
	for (int i = 0; i < SIZE; i++)
	{
		data[i] = rand() % 10 + 1;
	}
	printf("The original data is: \n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%4d ", data[i]);
		if((i+1) % 10 == 0)
			printf("\n");
	}
	printf("\n");
	sort(data, SIZE);
	printf("The sorted data is: \n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%4d ", data[i]);
		if ((i + 1) % 10 == 0)
			printf("\n");
	}
	printf("\n");
	return 0;
}
void sort(int array[], int n)
{
	int temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}