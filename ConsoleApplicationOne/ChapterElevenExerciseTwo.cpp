#include <stdio.h>
#define SIZE 10
#define BUFFERSIZE 5
char* readChar(char* str, int n);
int main(void)
{
	char str[SIZE];
	printf("Please input %d characters (including space, tab, newlines):", BUFFERSIZE);
	readChar(str, BUFFERSIZE);
	puts("The string you input is:");
	str[BUFFERSIZE] = '\0';
	puts(str);
	return 0;
}
char* readChar(char* str, int n)
{
	int i = 0;
	while (i < n)
	{
		*(str + i) = getchar();
		if (*str == ' ' || *str == '\t' || *str == '\n')
			break;
		i++;
	}
	return str;
}