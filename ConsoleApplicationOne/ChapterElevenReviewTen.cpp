#include <stdio.h>
int strlenOne(char* str);
int main(void)
{
	char str[] = "Hello World!";
	printf("%s has %d charatcers", str, strlenOne(str));
	return 0;
}
int strlenOne(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}