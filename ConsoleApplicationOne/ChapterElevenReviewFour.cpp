#include <stdio.h>
#include <string.h>
int main(void)
{
	char goldwyn[40] = "art of it all ";
	char samuel[40] = "I read p";
	const char* quote = "the way through.";
	strcat_s(goldwyn, quote);
	strcat_s(samuel, goldwyn);
	puts(samuel);
	return 0;
}