#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define ANSWER "grant"
#define SIZE 40
char* s_gets(char* st, int n);
void toLower(char * str);
int main(void)
{
	char tryOne[SIZE];
	puts("Who is buried in Grant's tomb?");
	s_gets(tryOne, SIZE);
	toLower(tryOne);
	while (strcmp(tryOne, ANSWER) != 0)
	{
		puts("No, that's wrong. Try again.");
		s_gets(tryOne, SIZE);
		toLower(tryOne);
	}
	puts("That's right!");
	return 0;
}
void toLower(char * str)
{
	while (*str != '\0')
	{
		*str = tolower(*str);
		str++;
	}
}
char* s_gets(char* st, int n)
{
	char* ret_val;
	int i = 0;
	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		while (st[i] != '\n' && st[i] != '\0')
			i++;
		if (st[i] == '\n')
			st[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}