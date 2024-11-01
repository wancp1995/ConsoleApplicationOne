#include <stdio.h>
int units = 0;
void critic(void);
int main(void)
{
	extern int units;
	printf("How many pounds to a ficrkon fo butter?\n");
	scanf_s("%d", &units);
	while (units != 56)
		critic();
	printf("You must have looked it up!\n");
	return 0;
}
void critic(void)
{
	printf("No luck, my friend. Try again.\n");
	scanf_s("%d", &units);
}