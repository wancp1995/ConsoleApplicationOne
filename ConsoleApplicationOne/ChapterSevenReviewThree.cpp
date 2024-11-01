#include <stdio.h>
int main(void)
{
	int weight, height;
	printf("Enter your weight in pounds and yout height in inches.\n");
	scanf_s("%d %d", &weight, &height);
	if (weight < 100 & height > 64)
	{
		if (height >= 72)
			printf("You are very tall for you weight.\n");
		else
			printf("You are tall for your weight.\n");
	}
	else if (weight > 300 && height < 48)
		printf("You are quite short for yout weight.\n");
	else
		printf("Your weight is ideal.\n");
	return 0;
}