#include <stdio.h>
int main(void)
{
	int firstNumber, secondNumber, sum = 0,i;
	printf("Enter lower and upper integer limits: ");
	while (scanf_s("%d %d", &firstNumber, &secondNumber) == 2)
	{
		if (firstNumber >= secondNumber)
			break;
		for (i = firstNumber; i <= secondNumber; i++)
		{
			sum += i * i;
		}
		printf("The sums of the squares from %d to %d is %d\n", firstNumber * firstNumber, secondNumber * secondNumber, sum);
		printf("Enter next set of limits: ");
	}
	printf("Done\n");
	return 0;
}