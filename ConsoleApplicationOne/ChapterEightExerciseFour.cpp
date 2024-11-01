#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int ch;
	int isWord = 0;
	int wordCount = 0;
	int charCount = 0;
	while ((ch = getchar()) != EOF)
	{
		if (isalpha(ch))
		{
			charCount++;
			if (!isWord)
			{
				wordCount++;
				isWord = 1;
			}
		}
		if (isspace(ch))
		{
			isWord = 0;
		}
	}
	printf("There are %d words, and %d characters.\n", wordCount, charCount);
	return 0;
}