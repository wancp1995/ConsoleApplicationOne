#include <stdio.h>
int main(void)
{
	int guess = 1;
	printf("Pick an integer from 1 to 100. I will try to guess it.\n");
	printf("Respond with a y if my guess is right and with\n");
	printf("an n if it is wrong.\n");
	printf("Oh...is your number %d?\n", guess);
	while (getchar() != 'y')
	{
		printf("Well, then, is it %d?\n", ++guess);
		while (getchar() != '\n')
			continue;
	}
	printf("I know I could do it!\n");
	return 0;
}