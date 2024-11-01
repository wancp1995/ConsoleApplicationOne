#include <stdio.h>
#include <string.h>
#define SIZE 40
char* trimStr(char* str);
int main(void)
{
	char str[SIZE];
	printf("Enter a string: ");
	fgets(str, SIZE, stdin);
	while (*str != EOF)
	{
		trimStr(str);
		printf("Now the invert string is : %s\n", str);
		printf("Enter a string: ");
		fgets(str, SIZE, stdin);
	}
	return 0;
}
char* trimStr(char* str)
{
	int i = 0, j = 0;
	while(*(str + i) != '\0')
	{ 
		if (*(str + i) != ' ')
			*(str + j++) = *(str + i);
		i++;
	}
	*(str + j) = '\0';
	return str;
}