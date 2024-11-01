#include <stdio.h>
int main(void)
{
	char ch;
	int count = 0;
	printf("Please input char (# for exit):");
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
		case '.':
			count++;
			printf("!");
			break;
		case '!':
			count++;
			printf("!!");
			break;
		default:
			printf("%c", ch);
			break;
		}
	}
	printf("\nTotal replace %d times\n", count);
	printf("Done!\n");
	return 0;
}