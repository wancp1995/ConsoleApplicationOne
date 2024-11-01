#include <stdio.h>
void putOne(const char * string)
{
	while (*string != '\0')
		putchar(*string++);
}