#include <stdio.h>
int imin(int, int);
int main(void)
{
	int evilOne, evilTwo;
	printf("Enter a pair of integers (q to quit):\n");
	while (scanf_s("%d %d", &evilOne, &evilTwo) == 2)
	{
		printf("The lesser of %d amd %d is %d.\n", evilOne, evilTwo, imin(evilOne, evilTwo));
		printf("Enter a pair of integers (q to quit):\n");
	}
	printf("Bye.\n");
	return 0;
}
int imin(int numberOne, int numberTwo)
{
	int min;
	if (numberOne < numberTwo)
		min = numberOne;
	else
		min = numberTwo;
	return min;
}