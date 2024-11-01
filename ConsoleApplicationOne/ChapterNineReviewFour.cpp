#include <stdio.h>
int sum(int, int);
int main(void)
{
	printf("The sum of %d and %d is %d.\n", 3, 5, sum(3, 5));
	return 0;
}
int sum(int n, int m)
{
	return n + m;
}