#include <stdio.h>
#define SIZE 8
void printOne();
void printTwo();
int main(void)
{
	printOne();
	printTwo();
	return 0;
}
void printOne()
{
	printf("printOne():\n");
	int firstArray[SIZE], secondArray[SIZE];
	int i, j;
	printf("please enter %d numbers(separated by blank):", SIZE);
	for (i = 0; i < SIZE; i++)
	{
		scanf_s("%d", &firstArray[i]);
	}
	for (i = 0; i < SIZE; i++)
	{
		int sum = 0;
		for (j = 0; j <= i; j++)
		{
			sum += firstArray[j];
		}
		secondArray[i] = sum;
	}
	printf("first array:");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", firstArray[i]);
	}
	printf("\n");
	printf("second array:");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", secondArray[i]);
	}
}
void printTwo()
{
	printf("\n\n\n\n\nprintTwo():\n");
	int firstArray[SIZE], secondArray[SIZE];
	int i, j;
	printf("please enter %d numbers(separated by blank):", SIZE);
	for (i = 0; i < SIZE; i++)
	{
		scanf_s("%d", &firstArray[i]);
	}
	secondArray[0] = firstArray[0];
	for (i = 1; i < SIZE; i++)
	{
		secondArray[i] = secondArray[i-1] + firstArray[i];
	}
	printf("first array:");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", firstArray[i]);
	}
	printf("\n");
	printf("second array:");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", secondArray[i]);
	}
}