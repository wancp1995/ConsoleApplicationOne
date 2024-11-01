#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 100
int myatoi(char* str);
int main(void)
{
	char str[SIZE];
	int number;
	printf("Enter a string of digit: ");
	scanf_s("%s", str, sizeof(str));
	number = myatoi(str);
	if (number != 0)
		printf("the converted number is: %d", number);
	else
		printf("Your input is not a number.\n");
	return 0;
}
int myatoi(char *str)
{
	int result = 0;
	int i = 0;
	if (*str == '\0')
		return 0;
	while (*(str + i) != '\0')
	{
		if (!isdigit(*(str + i)))
		{
			return 0;
		}
		result = result * 10 + (*(str+i) - '0');
		i++;
	}
	return result;
}
