#include <stdio.h>
#include <string.h>
#define SIZE 40
char* invertChar(char* str);
int main(void)
{
	char str[SIZE];
	printf("Enter a string: ");
	scanf_s("%s", str, sizeof(str));
	while (*str != EOF)
	{
		invertChar(str);
		printf("Now the invert string is : %s\n", str);
		printf("Enter a string: ");
		scanf_s("%s", str, sizeof(str));
	}
	return 0;
}
char* invertChar(char* str)
{
	int start = 0;
	int end = strlen(str);
	int temp;
	while (start < end)
	{
		temp = *(str + end - 1);
		*(str + end - 1) = *(str + start);
		*(str + start) = temp;
		end--;
		start++;
	}
	return str;
}