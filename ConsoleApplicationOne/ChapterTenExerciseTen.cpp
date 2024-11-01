#include <stdio.h>
#define SIZE 4
void copyArray(const int arrayOne[],const int arrayTwo[], int copyArray[], int n);
int main(void)
{
	int arrayOne[SIZE] = {2, 4, 5, 8};
	int arrayTwo[SIZE] = {1, 0, 4, 6};
	int targetArray[SIZE];
	int i;
	copyArray(arrayOne, arrayTwo, targetArray, SIZE);
	for (i = 0; i < SIZE; i++)
		printf("%d ", targetArray[i]);
	return 0;
}
void copyArray(const int arrayOne[], const int arrayTwo[], int copyArray[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		copyArray[i] = arrayOne[i] + arrayTwo[i];
	}
}
