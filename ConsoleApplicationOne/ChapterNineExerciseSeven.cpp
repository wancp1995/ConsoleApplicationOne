#include <stdio.h>
#include <ctype.h>
int charPosition(char ch);
int main(void)
{
	char ch;
	printf("Please enter the char:");
	while ((ch = getchar()) != EOF)
	{
		if (ch == '\n')
			continue;
		if (charPosition(ch) != -1)
			printf("The char %c's postion in alphabet is %d.\n",ch, charPosition(ch));
		else
			printf("%c is not a alphabet.\n");
		printf("Please enter the char:");
	}
	return 0;
}
int charPosition(char ch)
{
	if (isalpha(ch))
		return (int)(tolower(ch) - 'a') + 1;
	else
		return -1;
}