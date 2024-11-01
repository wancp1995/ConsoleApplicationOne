#include <stdio.h>
#define DAY_PER_WEEK 7
int main(void)
{
	int days, weeks, left;
	printf("Convert days to weeks and days!\n");
	printf("Enter the number of days (<=0 to quit):\n");
	scanf_s("%d", &days);
	while (days > 0)
	{
		weeks = days / DAY_PER_WEEK;
		left = days % DAY_PER_WEEK;
		printf("%d days are %d weeks, %d days.\n", days, weeks, left);
		printf("Enter next value (<=0 to quit):\n");
		scanf_s("%d", &days);
	}
	printf("Done!");
	return 0;
}