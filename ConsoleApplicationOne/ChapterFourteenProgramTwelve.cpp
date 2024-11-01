#include <stdio.h>
#include <stdlib.h>
struct flex
{
	size_t count;
	double average;
	double scores[];
};
void showFlex(const struct flex * p);
int main()
{
	struct flex* pfOne, * pfTwo;
	int n = 5;
	int i;
	int tot = 0;
	pfOne = (struct flex*) malloc(sizeof(struct flex) + n * sizeof(double));
	pfOne->count = n;
	for (i = 0; i < n; i++)
	{
		pfOne->scores[i] = 20.0 - i;
		tot += pfOne->scores[i];
	}
	pfOne->average = tot / n;
	showFlex(pfOne);
	n = 9;
	tot = 0;
	pfTwo = (struct flex *) malloc(sizeof(struct flex) + n * sizeof(double));
	pfTwo->count = n;
	for (i = 0; i < n; i++)
	{
		pfTwo->scores[i] = 20.0 - i / 2.0;
		tot += pfTwo->scores[i];
	}
	pfTwo->average = tot / n;
	showFlex(pfTwo);
	free(pfOne);
	free(pfTwo);
	return 0;
}
void showFlex(const struct flex* p)
{
	int i;
	printf("Scores : ");
	for (i = 0; i < p->count; i++)
		printf("%g ", p->scores[i]);
	printf("\nAverages: %g\n", p->average);
}