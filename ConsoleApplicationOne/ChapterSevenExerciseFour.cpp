#include <stdio.h>
int main(void)
{
	char ch;
	int count = 0;
	printf("Please input char (# for exit):");
	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			printf("!");
			count++;
		}
		else if (ch == '!')
		{
			printf("!!");
			count++;
		}
		else
		{
			printf("%c", ch);
		}
	}
	printf("\nTotal replace %d times\n", count);
	printf("Done!\n");
	return 0;
}