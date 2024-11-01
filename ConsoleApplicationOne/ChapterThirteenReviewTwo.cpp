#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char* argv[])
{
	int ch;
	FILE* fp;
	if (argc < 2)
		exit(EXIT_FAILURE);
	fopen_s(&fp, argv[1], "r");
	if (fp == NULL)
		exit(EXIT_FAILURE);
	while ((ch = getc(fp)) != EOF)
		if (isdigit(ch))
			putchar(ch);
	fclose(fp);
	return 0;
}