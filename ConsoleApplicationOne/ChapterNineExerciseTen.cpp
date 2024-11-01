#include <stdio.h>
void to_base_n(unsigned long n, int nBase);
int main(void)
{
	unsigned long number;
	int nBase;
	printf("Enter a long number and an integer (q to quit):\n");
	while (scanf_s("%lu %d", &number, &nBase) == 2)
	{
		printf("number equivalent base n: ");
		to_base_n(number, nBase);
		putchar('\n');
		printf("Enter a long number and an integer (q to quit):\n");
	}
	printf("Done.\n");
	return 0;
}
void to_base_n(unsigned long n, int nBase)
{
	if (nBase < 2 || nBase > 10)
	{
		printf("base must between 2  and 10\m");
		return;
	}
	int r;
	r = n % nBase;
	if (n >= nBase)
		to_base_n(n / nBase, nBase);
	printf("%d", r);
	return;
}