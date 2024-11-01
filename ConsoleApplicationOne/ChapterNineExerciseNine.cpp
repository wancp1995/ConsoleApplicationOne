#include <stdio.h>
double power(double n, int p);
int main(void)
{
	double x, xpow;
	int exp;
	printf("Enter a number and the positive integer power");
	printf(" to which\nthe number will be rasied. Enter q");
	printf(" to quit.\n");
	while (scanf_s("%lf%d", &x, &exp) == 2)
	{
		xpow = power(x, exp);
		printf("%.3g to power %d is %.5g\n", x, exp, xpow);
		printf("Enter next pair of numbers or q to quit.\n");
	}
	printf("Hope you enjoyed this power trip -- bye!\n");
	return 0;
}
double power(double n, int p)
{
	double pow = 1;
	int i;
	if (n == 0 && p == 0)
	{
		printf("The %g to the power %d is not defined, return 1!\n", p, n);
		return 1;
	}
	if (n == 0)
		return 0;
	if (p == 0)
		return 1;
	if (p > 0)
	{
		return n * power(n, p-1);
	}
	else
	{
		return power(n, p+1) / n;
	}
}