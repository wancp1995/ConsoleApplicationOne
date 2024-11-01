#include <stdio.h>
#define DEF "I am a #defined string."
int main(void)
{
	char strOne[80] = "An array was initialized to me.";
	const char* strTwo = "A pointer was initialized to me.";
	puts("I'm an argument to puts().");
	puts(DEF);
	puts(strOne);
	puts(strTwo);
	puts(&strOne[5]);
	puts(strTwo + 4);
	return 0;
}