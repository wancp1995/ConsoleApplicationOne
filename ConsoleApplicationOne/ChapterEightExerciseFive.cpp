#include <stdio.h>
int main(void)
{
	int head = 1;
	int tail = 100;
	int guess = (head + tail) / 2;
	char ch;
	printf("Pick an integer from 1 to 100. I will try to guess it.\n");
	printf("Respond with a y if my guess is right and with\n");
	printf("an n if it is wrong.\n");
	do
	{
		printf("Oh...is your number %d?\n", guess);
		if (getchar() == 'y')
			break;
		printf("Well, then, %d is larger or smaller than yours? (l or s):", guess);
		while ((ch = getchar()) == '\n')
			continue;
		if (ch == 'l' || ch == 'L')
		{
			tail = guess - 1;
			guess = (head + tail) / 2;
			continue;
		}
		else if (ch == 's' || ch == 'S')
		{
			head = guess + 1;
			guess = (head + tail) / 2;
			continue;
		}
	}while (getchar() != 'y');
	printf("I know I could do it!\n");
	return 0;
}