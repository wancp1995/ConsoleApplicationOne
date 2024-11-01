#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
#define LENGTH 1000
int main(void)
{
	int dataCount[SIZE + 1];
	int datum;
	for (int seed = 1; seed <= 10; seed++)
	{
		printf("This is %d round to create data.\n", seed);
		srand(seed);
		for (int i = 0; i <= SIZE; i++)
			dataCount[i] = 0;
		for (int i = 0; i < LENGTH; i++)
		{
			datum = rand() % 10 + 1;
			dataCount[datum]++;
		}
		printf("Rnadom data created, Let's stata it.\n");
		for (int i = 1; i <= SIZE; i++)
		{
			printf("The datum %d created %d times.\n", i, dataCount[i]);
		}
	}
	return 0;
}