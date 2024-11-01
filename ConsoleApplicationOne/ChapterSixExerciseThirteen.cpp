#include <stdio.h>
#include <math.h>
#define SIZE 8
int main(void)
{
	int intArray[SIZE],i,count = 0;
	for (i = 0; i < SIZE; i++)
	{
		intArray[i] = pow(2, i + 1);
	}
	printf("array is:");
	do
	{
		printf("%d ", intArray[count]);
		count++;
	} while (count < SIZE);
	printf("\n");
	return 0;
}