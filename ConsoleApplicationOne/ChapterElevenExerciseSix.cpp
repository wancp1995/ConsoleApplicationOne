#include <stdio.h>
#define SIZE 40
int is_within(char* str, char ch);
int main(void)
{
	char source[SIZE];
	char dest = ' ';
	int position;
	printf("Enter a string: ");
	fgets(source, SIZE, stdin);
	while (dest != EOF)
	{
		printf("Enter a char to find(EOF for quit):");
		while ((dest = getchar()) == '\n')
			continue;
		if ( is_within(source, dest) != 0)
			printf("Found the char %c in the %s\n", dest, source);
		else
			printf("Char %c not found. Try another?\n", dest);
	}
	return 0;
}
int is_within(char* str, char ch)
{
	while (*str != '\0')
	{
		if (*str == ch)
			return 1;
		else
			str++;
	}
	return 0;
}