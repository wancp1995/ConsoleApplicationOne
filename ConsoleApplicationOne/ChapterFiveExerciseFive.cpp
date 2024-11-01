#include <stdio.h>
int main(void)
{
	int count, sum;
	printf("Enter the number of days you work:");
	scanf_s("%d", &count);
	sum = 0;
	while (count > 0)
	{
		sum = sum + count;
		count--;
	}
	printf("sum = %d\n", sum);
	return 0;
}