#include <stdio.h>
#define SIZE 8
int main(void)
{
	int by_twos[SIZE];
	int index;
	for (index = 0; index < SIZE; index++)
	{
		by_twos[index] = 2 * (index + 1);
	}
	for (index = 0; index < SIZE; index++)
	{
		printf("%d ",by_twos[index]);
	}
	printf("\n");
	return 0;
}