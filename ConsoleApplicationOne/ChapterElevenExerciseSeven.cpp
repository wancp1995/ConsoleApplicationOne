#include <stdio.h>
#define SIZE 40
char* mystrncpy(char* dest, char* src, int n);
int main(void)
{
	char destination[SIZE], source[SIZE];
	int number;
	printf("Enter a string as source: ");
	fgets(source, SIZE, stdin);
	printf("Enter the number of char you need to copy: ");
	scanf_s("%d", &number);
	while (*source != EOF)
	{
		mystrncpy(destination, source, number);
		printf("Now the dest string is %s\n", destination);
		while (( getchar()) != '\n')
			continue;
		printf("Enter a string as source: ");
		fgets(source, SIZE, stdin);
		printf("Enter the number of char you need to copy: ");
		scanf_s("%d", &number);
	}
	return 0;
}
char* mystrncpy(char* dest, char* src, int n)
{
	int count = 0;
	while (*src != '\0' && count < n)
	{
		*(dest + count++) = *src++;
	}
	if (count < n)
		while (count < n)
			*(dest + count++) = '\0';
	else
		*(dest + count++) = '\0';
	return dest;
}