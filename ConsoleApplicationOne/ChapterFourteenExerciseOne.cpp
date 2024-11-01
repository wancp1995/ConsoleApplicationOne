#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	int totalDay = 0, currentMonth = 0;
	char monthName[20];
	printf("Input current month name: ");
	scanf_s("%s", monthName, sizeof(monthName));
	for (int i = 0; i < 12; i++)
	{
		totalDay += months[i].days;
		if (strcmp(months[i].abbrev, monthName) == 0)
		{
			currentMonth = months[i].monumb;
			break;
		}
	}
	printf(" 1 - %d months has %d days\n", currentMonth, totalDay);
	return 0;
}