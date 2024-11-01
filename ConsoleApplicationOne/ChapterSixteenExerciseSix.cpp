#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM 4
typedef struct {
	char first[40];
	char last[40];
}names;
void fillarray(names list[], int n);
void showarray(const names list[], int n);
int mycomp(const void* p1, const void* p2);
int main(void)
{
	names list[NUM];
	fillarray(list, NUM);
	showarray(list, NUM);
	qsort(list, NUM, sizeof(names), mycomp);
	puts("\nSorted list:");
	showarray(list, NUM);
	return 0;
}
void fillarray(names list[], int n)
{
	int index;
	for (index = 0; index < n; index++)
	{
		printf("Enter the %d stuff name:", index + 1);
		scanf_s("%s %s", list[index].first, sizeof(list[index].first), list[index].last, sizeof(list[index].last));
	}
}
void showarray(const names list[], int n)
{
	int index;
	for (index = 0; index < n; index++)
	{
		printf("Stuff No %d %10s.%-10s\n", index + 1, list[index].first, list[index].last);
	}
}
int mycomp(const void* p1, const void* p2)
{
	const names* a1 = (const names*)p1;
	const names* a2 = (const names*)p2;
	int res = strcmp(a1->last, a2->last);
	if (res != 0)
		return res;
	else
		return strcmp(a1->first, a2->first);
}