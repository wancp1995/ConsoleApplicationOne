#include <stdio.h>
#define SIZE 40
char* findStrChar(char *str, char ch);
int main(void)
{
	char source[SIZE];
	char dest = ' ';
	char* position;
	printf("Enter a string: ");
	fgets(source, SIZE, stdin);
	while (dest != EOF)
	{
		printf("Enter a char to find(EOF for quit):");
		while ((dest = getchar()) == '\n')
			continue;
		if ((position = findStrChar(source, dest)) != NULL)
			printf("Found the char %c in the %p\n", *position, position);
		else
			printf("Char not found. Try another?\n");
	}
	return 0;
}
char* findStrChar(char* str, char ch)
{
	while (*str != '\0')
	{
		if (*str == ch)
			return str;
		else
			str++;
	}
	return NULL;
}