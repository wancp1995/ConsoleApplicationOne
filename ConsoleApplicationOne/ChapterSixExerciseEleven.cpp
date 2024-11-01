#include <stdio.h>
#define SIZE 8
int main(void)
{
	int intArray[SIZE] ,i;
	printf("Please enter %d numbers (separated by blanks): ", SIZE);
	for ( i = 0; i < SIZE; i++)
	{
		scanf_s("%d",&intArray[i]);
	}
	printf("array reverse is:");
	for (i = SIZE - 1; i >= 0; i--)
	{
		printf("%d ", intArray[i]);
	}
	printf("\n");
	return 0;
}