#include <stdio.h>
#include <string.h>
#define WORDS "beast"
#define SIZE 40
int main(void)
{
	const char* orig = WORDS;
	char copy[SIZE] = "Be the best that you can be.";
	char* ps;
	puts(orig);
	puts(copy);
	strcpy_s(copy + 7, SIZE -7, orig);
	puts(copy);
	puts(copy + 7);
	return 0;
}