#include <stdio.h>
void Fibonacci(int n);
int main(void)
{
	int n;
	printf("Enter the number of Fibonacci (q to quit):");
	while ((scanf_s("%d", &n) == 1))
	{
		if (n >= 2) 
		{
			Fibonacci(n);
			printf("Enter the number of Fibonacci (q to quit):");
		}
	}
	return 0;
}
void Fibonacci(int n)
{
	int  preNum = 1, preTwoNum = 0, sum = 0, i;
	for (i = 1; i <= n; i++)
	{
		sum = preNum + preTwoNum;
		preTwoNum = preNum;
		preNum = sum;
		printf("%d ", preTwoNum);
	}
	printf("\n");
}