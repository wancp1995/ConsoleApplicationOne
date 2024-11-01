#include <stdio.h>
#define SIZE 26
int main(void)
{
	char charArray[SIZE],i;
	for (i = 0; i < SIZE; i++)
	{
		charArray[i] = 'a' + i;
	}
	for (i = 0; i < SIZE; i++)
	{
		printf("%c", charArray[i]);
	}
	printf("\n");
	return 0;
}