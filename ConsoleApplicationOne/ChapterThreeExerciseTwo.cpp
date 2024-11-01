#include <stdio.h>
int main(void)
{
	int asciiValue;
	printf("Enter a value of char in ASCII:");
	scanf_s("%d", &asciiValue);
	printf("Your input value is: %d, equals char is: %c", asciiValue, asciiValue);
	return 0;
}