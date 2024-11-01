#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int* p1 = (int*)malloc(100 * sizeof(int));
	int* p2 = (int *)calloc(100, sizeof(int));
	printf("Malloc values:\n");
	for (int i = 0; i < 5; i++)
	{
		printf("p1[%d] is %d\n", i, p1[i]);
	}
	printf("\nCalloc values:\n");
	for (int i = 0; i < 5; i++)
	{
		printf("p2[%d] is %d\n", i, p2[i]);
	}
	free(p1);
	free(p2);
	return 0;
}