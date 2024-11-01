#include <stdio.h>
#include <stdlib.h>
extern void srandOne(unsigned int x);
extern int randOne(void);
int main(void)
{
	int count;
	unsigned seed;
	printf("Please enter your choice for seed.\n");
	while (scanf_s("%u", &seed) == 1)
	{
		srandOne(seed);
		for (count = 0; count < 5; count++)
			printf("%d\n", randOne());
		printf("Please enter next seed (q to quit):\n");
	}
	printf("Done!\n");
}