#include <stdio.h>
#include <stdlib.h>
struct month
{
	char name[10];
	char abbrev[4];
	int days;
	int monumb;
};

struct  month months[12] =
{
	{ "January", "jan", 31, 1 },
	{ "February", "feb", 28, 2 },
	{ "March", "mar", 31, 3 },
	{ "April", "apr", 30, 4 },
	{ "May", "may", 31,5 },
	{ "June", "jun", 30, 6 },
	{ "July", "jul", 31, 7 },
	{ "August", "aug", 31, 8 },
	{ "September", "sep", 30, 9 },
	{ "October", "oct", 31, 10 },
	{ "November", "nov",30, 11 },
	{ "December", "dec", 31, 12 }
};
int main(void)
{
	int currentMonth = 0, totalDay = 0;
	printf("Input current month: ");
	scanf_s("%d", &currentMonth);
	if (currentMonth < 1 || currentMonth > 12) 
	{
		printf("month should range from 1 to 12\n");
		exit(EXIT_FAILURE);
	}
	for (int i = 0; i < currentMonth; i++)
		totalDay += months[i].days;
	printf(" 0 - %d months has %d days\n", currentMonth, totalDay);
	return 0;
}