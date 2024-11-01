#include <stdio.h>
int main(void)
{
	char ch;
	int spaceCount = 0;
	int nextLineCount = 0;
	int otherCount = 0;
	while ((ch = getchar()) != '#')
	{
		if (ch == ' ')
			spaceCount++;
		else if (ch == '\n')
			nextLineCount++;
		else
			otherCount++;
	}
	printf("%d space, %d line break, %d other\n", spaceCount, nextLineCount, otherCount);
	return 0;
}