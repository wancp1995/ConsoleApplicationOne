#include <stdio.h>
int main(void)
{
	int start, end, index;
	printf("Please enter the start number:");
	scanf_s("%d", &start);
	printf("Please enter the end number:");
	scanf_s("%d", &end);
	for (index = start; index <= end; index++)
	{
		printf("number: %d, square is %d, cube is %d\n", index , index * index, index * index * index);
	}
	return 0;
}