#include <stdio.h>
#include <ctype.h>
#include <string.h>
void printOrig(char *str);
void printUpper(char *str);
void printLower(char *str);
#define SIZE 256
int main(int argc, char* argv[])
{
	char str[SIZE];
	char c;
	if (argc < 2)
	{
		c = 'p';
	}
	else 
	{
		c = argv[1][1];
	}
	printf("Enter a string to convert:");
	fgets(str, SIZE, stdin);
	switch (c)
	{
		case 'p':
		case 'P':
			printOrig(str);
			break;
		case 'u':
		case 'U':
			printUpper(str);
			break;
		case 'l':
		case 'L':
			printLower(str);
			break;
		default:
			break;
	}
}
void printOrig(char* str)
{
	printf("The original text is:\n%s", str);
}

void printUpper(char* str)
{
	printf("The upper case text is:\n");
	while (*str != EOF && *str != '\0')
	{
		putchar(toupper(*str));
		str++;
	}
}
void printLower(char* str)
{
	printf("The lower case text is:\n");
	while (*str != EOF && *str != '\0')
	{
		putchar(tolower(*str));
		str++;
	}
}