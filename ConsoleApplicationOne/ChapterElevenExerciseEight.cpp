#include <stdio.h>
#include <string.h>
#define SIZE 40
char* string_in(char* str, char* sub);
int main(void)
{
	char str[SIZE], sub[SIZE];
	char* p = NULL;
	printf("Enter a main string: ");
	scanf_s("%s", str, sizeof(str));
	printf("Enter a sub string: ");
	scanf_s("%s", sub, sizeof(sub));
	while (*str != EOF)
	{
		p = string_in(str, sub);
		if (p != NULL)
			printf("Now the position of sub string is:  %p\n", p);
		else
			printf("NULL");
		printf("Enter a main string: ");
		scanf_s("%s", str, sizeof(str));
		printf("Enter a sub string: ");
		scanf_s("%s", sub, sizeof(sub));
	}
	return 0;
}
char* string_in(char* str, char* sub)
{
	int count = 0;
	int subLen = strlen(sub);
	while (*str != '\0' && count < subLen)
	{
		if (*(str + count) == *(sub + count))
		{
			count++;
		}
		else
		{
			count = 0;
			str++;
		}
	}
	if (count == subLen)
		return str;
	else
		return NULL;
}