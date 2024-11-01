#include <stdio.h>
void printIntValue();
int main()
{
	printIntValue();
	return 0;
}
void printIntValue()
{
	int value;
	printf("printIntValue():");
	for (value = 36; value > 0; value /= 2)
	{
		printf("%3d",value);
	}
	printf("\n");
}
