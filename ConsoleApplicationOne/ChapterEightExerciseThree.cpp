#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;
	int lowerCharCount = 0;
	int upperCharCount = 0;
	while ((ch = getchar()) != EOF)
	{
		if (islower(ch))
		{
			lowerCharCount++;
		}
		else if(isupper(ch))
		{
			upperCharCount++;
		}
	}
	printf("There are %d upper characters, and %d lower characters.\n", upperCharCount, lowerCharCount);
	return 0;
}