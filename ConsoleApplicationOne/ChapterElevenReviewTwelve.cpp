#include <stdio.h>
char* findFirstSpace(char* str);
int main(void)
{
	char str[] = "Hello World!";
	char* find = findFirstSpace(str);
	if (find)
		puts(find);
	return 0;
}
char* findFirstSpace(char *str)
{
	char* find = NULL;
	while (*str != '\0')
	{
		if (*str == ' ')
			find = str;
		str++;
	}
	return find;
}