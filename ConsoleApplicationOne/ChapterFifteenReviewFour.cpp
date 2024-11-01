#include <stdio.h>
int main(void)
{
	printf("~0  = :  %d\n", (~0));
	printf("!0 = :  %d\n", (!0));
	printf("2 & 4 = :  %d\n", (2 & 4));
	printf("2 && 4 = :  %d\n", (2 && 4));
	printf("2 | 4 = :  %d\n", (2 | 4));
	printf("2 || 4 = :  %d\n", (2 || 4));
	printf("5 << 3 = :  %d\n", (5 << 3));
	return 0;
}