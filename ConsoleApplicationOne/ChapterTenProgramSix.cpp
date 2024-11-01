#include <stdio.h>
#define SIZE 4
int main(void)
{
	int valueOne = 44;
	int arr[SIZE];
	int valueTwo = 88;
	int i;
	printf("valueOne = %d, valueTwo = %d\n", valueOne, valueTwo);
	for (i = 0; i < SIZE; i++)
	{
		arr[i] = 2 * i + 1;
	}
	for (i = -1; i < 7; i++)
	{
		printf("%2d %d\n", i, arr[i]);
	}
	printf("valueOne = %d, valueTwo = %d\n", valueOne, valueTwo);
	printf("address of arr[-1]: %p\n", &arr[-1]);
	printf("address of arr[4]: %p\n", &arr[4]);
	printf("address of valueOne: %p\n", &valueOne);
	printf("address of valueTwo: %p\n", &valueTwo);
	return 0;
}