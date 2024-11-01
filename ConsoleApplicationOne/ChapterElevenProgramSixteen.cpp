#include <stdio.h>
void putOne(const char* string);
int putTwo(const char* string);
int main(void)
{
	putOne("If I'd as much money");
	putOne(" as I could speed,\n");
	printf("I count %d characters.\n", putTwo("I never would cry old chairs to mend."));
	return 0;
}
void putOne(const char* string)
{
	while (*string != '\0')
		putchar(*string++);
}
int putTwo(const char* string)
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