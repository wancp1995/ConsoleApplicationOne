#include <stdio.h>
#define PERIOD '.'
int main(void)
{
	char ch;
	int charcount = 0;
	while ((ch = getchar()) != '.')
	{
		if (ch != '"' && ch != '\'')
			charcount++;
	}
	printf("There are %d non-qoute characters.\n", charcount);
	return 0;
}