#include <stdio.h>
#define MIN_PER_HOUR 60
int main(void)
{
	int min, hour, left;
	printf("Convert minutes to hours and minutes!\n");
	printf("Enter the number of minutes (<=0 to quit):\n");
	scanf_s("%d", &min);
	while (min > 0)
	{
		hour = min / MIN_PER_HOUR;
		left = min % MIN_PER_HOUR;
		printf("%d minutes is %d hours, %d minutes.\n", min, hour, left);
		printf("Enter next value (<=0 to quit):\n");
		scanf_s("%d", &min);
	}
	printf("Done!");
	return 0;
}