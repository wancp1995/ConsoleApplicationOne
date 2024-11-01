#include <stdio.h>
int main(void)
{
	int firstOperand, secondOperand, left;
	printf("This program computes moduli.\n");
	printf("Enter an integer to serve as the second operand:");
	scanf_s("%d", &secondOperand);
	printf("Now enter the first operand:");
	scanf_s("%d", &firstOperand);
	while (firstOperand > 0)
	{
		left = firstOperand % secondOperand;
		printf("%d %% %d is %d.\n", firstOperand, secondOperand, left);
		printf("Enter next number for first operand (<=0 to quit):");
		scanf_s("%d", &firstOperand);
	}
	printf("Done!");
	return 0;
}