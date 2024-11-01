#include <stdio.h>
int main(void)
{
	char ch,preChar;
	int count = 0;

	printf("Please input char (# for exit):");
	preChar = '-1';
	while ((ch = getchar()) != '#')
	{
		if (ch == 'i' && preChar == 'e')
			count++;
		preChar = ch;
	}
	printf("\nTotal exit %d 'ei' in all char\n", count);
	printf("Done!\n");
	return 0;
}