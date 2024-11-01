#include <stdio.h>
#include <ctype.h>

int main()
{
	char ch;
	int wordsCount = 0;
	int upperCharCount = 0;
	int lowerCharCount = 0;
	int punctCount = 0;
	int digitCount = 0;
	int inWord = 0;
	printf("Input text (press Ctrl+D or Ctrl+Z to finish):\n");
	while ((ch = getchar()) != '\n')
	{
		if (!isspace(ch) && !inWord)
		{
			wordsCount++;
			inWord = 1;
		}
		if (isspace(ch))
		{
			inWord = 0;
		}
		if (isupper(ch))
		{
			upperCharCount++;
		}
		if (islower(ch))
		{
			lowerCharCount++;
		}
		if (ispunct(ch))
		{
			punctCount++;
		}
		if (isdigit(ch))
		{
			digitCount++;
		}
	}
	printf("\nStatistics:\n");
	printf("Input words %d.\n", wordsCount);
	printf("Input upper char %d.\n", upperCharCount);
	printf("Input lower char %d.\n", lowerCharCount);
	printf("Input punct char %d.\n", punctCount);
	printf("Input digital %d.\n", digitCount);
}