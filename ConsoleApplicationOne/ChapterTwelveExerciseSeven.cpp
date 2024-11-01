#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "diceroll.h"
int main(void)
{
	int dice, roll;
	int sides;
	int sets;
	srand((unsigned int)time(0));
	printf("Enter the number of sets;enter q to stop.\n");
	while (scanf_s("%d", &sets) == 1 && sets > 0)
	{
		printf("How many sides and how many dice?\n");
		if ((scanf_s("%d %d",&sides, &dice)) == 2 && sides > 0 && dice > 0)
		{
			printf("Here are %d sets of %d %d-sided thrown.\n", sets, dice, sides);
			for (int i = 1; i <= sets; i++)
			{
				roll = roll_n_dice(dice, sides);
				printf("%d ", roll);
			}
			sets = 0;
			putchar('\n');
		}
		printf("Enter the number of sets;enter q to stop.\n");
	}
	printf("The rollem() function was called %d times.\n", roll_count);
	printf("GOOD FORTURE TO YOU!\n");
	return 0;
}