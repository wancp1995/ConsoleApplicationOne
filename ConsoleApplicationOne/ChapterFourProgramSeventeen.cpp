#include <stdio.h>
int main(void)
{
	int n;
	scanf_s("%*d %*d %d", &n);
	printf("The last integer was %d\n", n);
	return 0;
}