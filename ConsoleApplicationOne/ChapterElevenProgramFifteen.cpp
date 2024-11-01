#include <stdio.h>
int putTwo(const char * string)
{
	int count = 0;
	while (*string)
	{
		putchar(*string++);
		count++;
	}
	putchar('\n');
	return (count);
}