#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	unsigned long num;
	unsigned long div;
	bool isPrime;
	int i;
	printf("Please enter an integer for analysis; ");
	printf("Enter q to quit.\n");
	while (scanf_s("%lu", &num) == 1)
	{
		for (i = 2; i <= num; i++)
		{
			isPrime = true;
			for (div = 2; (div * div) <= i; div++)
			{
				if (i % div == 0)
				{
					isPrime = false;
				}
			}
			if (isPrime)
				printf("%lu is Prime\n", i);
		}
		printf("Please enter another integer for analysis; ");
		printf("Enter q to quit.\n");
	}
	printf("Bye.\n");
	return 0;
}