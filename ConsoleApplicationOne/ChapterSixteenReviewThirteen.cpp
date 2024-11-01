#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM 100
void fillarray(int ar[], int n);
void showarray(const int ar[], int n);
int mycomp(const void* p1, const void* p2);
int main(void)
{
	int scores[NUM];
	fillarray(scores, NUM);
	puts("Random list:");
	showarray(scores, NUM);
	qsort(scores, NUM, sizeof(int), mycomp);
	puts("\nSorted list:");
	showarray(scores, NUM);
	return 0;
}
void fillarray(int ar[], int n)
{
	srand((unsigned int) time(NULL));
	int index;
	for (index = 0; index < n; index++)
		ar[index] = (int)rand() ;
}
void showarray(const int ar[], int n)
{
	int index;
	for (index = 0; index < n; index++)
	{
		printf("%9.4d ", ar[index]);
		if (index % 10 == 9)
			putchar('\n');
	}
	if (index % 9 != 0)
		putchar('\n');
}
int mycomp(const void* p1, const void* p2)
{
	const int* a1 = (const int*)p1;
	const int* a2 = (const int*)p2;
	if (*a1 < *a2)
		return -1;
	else if (*a1 == *a2)
		return 0;
	else
		return 1;
}