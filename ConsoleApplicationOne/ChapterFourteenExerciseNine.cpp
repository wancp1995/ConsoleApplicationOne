#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	int id;
	int booked;
	char fname[20];
	char lname[20];
}SEAT;
SEAT list[4][12] = {};
#define MAXNUM 12
void showMenu();
void getEmpty(SEAT list[]);
void showEmpty(SEAT list[]);
void showBooked(SEAT list[]);
void bookSeat(SEAT list[]);
void cancelBook(SEAT list[]);
int main(void)
{
	char selected;
	int airNo,listNo;
	printf("Please select airplane No1(102, 311, 444, 519):");
	scanf_s("%d", &airNo);
	while (airNo == 102 || airNo == 311 || airNo == 444 || airNo == 519) 
	{
		if (airNo == 102)
		{
			printf("You are select at Air %d: \n", airNo);
			listNo = 0;
		}
		if (airNo == 311)
		{
			printf("You are select at Air %d: \n", airNo);
			listNo = 1;
		}
		if (airNo == 444)
		{
			printf("You are select at Air %d: \n", airNo);
			listNo = 2;
		}
		if (airNo == 519)
		{
			printf("You are select at Air %d: \n", airNo);
			listNo = 3;
		}
		while (getchar() != '\n')
			continue;
		showMenu();
		while ((selected = getchar()) != 'f')
		{
			switch (selected)
			{
			case 'a':
				getEmpty(list[listNo]);
				break;
			case 'b':
				showEmpty(list[listNo]);
				break;
			case 'c':
				showBooked(list[listNo]);
				break;
			case 'd':
				bookSeat(list[listNo]);
				break;
			case 'e':
				cancelBook(list[listNo]);
				break;
			default:
				break;
			}
			while (getchar() != '\n')
				continue;
			showMenu();
		}
		while (getchar() != '\n')
			continue;
		printf("Please select airplane No1(102, 311, 444, 519):");
		scanf_s("%d", &airNo);
	}
	puts("Done!");
	return 0;
}
void showMenu()
{
	puts("To choose a function, enter its letter label:");
	puts("a) Show number of empty seats");
	puts("b) Show list of empty seats");
	puts("c) Show alphabetical list of seats");
	puts("d) Assign a customer to a seat assignment");
	puts("e) Delete a seat assignment");
	puts("f) Quit");
}
void getEmpty(SEAT list[])
{
	int sum = 0;
	for (int i = 0; i < MAXNUM; i++)
	{
		if (list[i].booked == 0)
		{
			sum++;
		}
	}
	printf("There are %d seats empty.\n", sum);
}
void showEmpty(SEAT list[])
{
	printf("Empty list:");
	for (int i = 0; i < MAXNUM; i++)
	{
		if (list[i].booked == 0)
			printf("%d ", i + 1);
	}
	putchar('\n');
}
void showBooked(SEAT list[])
{
	SEAT* ptstr[MAXNUM];
	for (int i = 0; i < MAXNUM; i++)
	{
		ptstr[i] = &list[i];
	}
	int top, seek;
	SEAT* temp;
	for (top = 0; top < MAXNUM; top++)
	{
		for (seek = 0; seek < MAXNUM - top - 1; seek++)
		{
			if (strcmp(ptstr[seek]->fname, ptstr[seek + 1]->fname) > 0)
			{
				temp = ptstr[seek];
				ptstr[seek] = ptstr[seek + 1];
				ptstr[seek + 1] = temp;
			}
		}
	}
	puts("Alphabetical list:");
	for (int i = 0; i < MAXNUM; i++)
	{
		if (list[i].booked == 1)
		{
			printf("Seat No: %d book by %s.%s\n", (i + 1), list[i].fname, list[i].lname);
		}
	}
}
void bookSeat(SEAT list[])
{
	int id;
	char fname[20], lname[20];
	showEmpty(list);
	puts("Please select the seat:");
	scanf_s("%d", &id);
	if (list[id - 1].booked == 1)
	{
		puts("Error selected.");
		return;
	}
	list[id - 1].id = id;
	puts("Please input your FIRST_NAME LAST_NAME.");
	scanf_s("%s %s", fname, sizeof(fname), lname, sizeof(lname));
	strcpy_s(list[id - 1].fname, fname);
	strcpy_s(list[id - 1].lname, lname);
	list[id - 1].booked = 1;
	puts("Booked!");
}
void cancelBook(SEAT list[])
{
	showBooked(list);
	int id;
	puts("Please select the seat to cancel.");
	scanf_s("%d", &id);
	if (list[id - 1].booked == 0)
	{
		puts("Error selected.");
		return;
	}
	list[id - 1].booked = 0;
	puts("Book canceled!");
}