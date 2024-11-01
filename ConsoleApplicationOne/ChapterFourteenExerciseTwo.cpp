#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
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
	int year, day;
	printf("Enter the YEAR MONTH DAY (seprate by blank): ");
	scanf_s("%d %s %d", &year, monthName, sizeof(monthName), &day);
	if (day < 1 || day > 31)
	{
		printf("days should range from 1 to 31.");
		exit(EXIT_FAILURE);
	}
	for (int i = 0; i < 12; i++)
	{
		if ((months[i].monumb == atoi(monthName)) || (strcmp(months[i].abbrev, monthName) == 0) || (strcmp(months[i].name, monthName) == 0))
		{
			totalDay += day;
			currentMonth = months[i].monumb;
			break;
		}
		else
		{
			totalDay += months[i].days;
		}
	}
	printf("The %d/%s/%d has %d days\n",year, monthName, day, totalDay);
	return 0;
}