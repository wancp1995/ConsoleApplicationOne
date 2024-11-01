#include <stdio.h>
#define DAYS_PER_YEAR 365
int main(void)
{
	int age, days;
	age = 31;
	days = age * DAYS_PER_YEAR;
	printf("your age is %d, borned days is %d\n",age, days);
	return 0;
}